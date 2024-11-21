# Enumerating Groups
➜  Administrator git:(main) ✗ enum4linux -u Olivia -p ichliebedich -G 10.10.11.42
        
        enum4linux -u Olivia -p ichliebedich -G 10.10.11.42

Starting enum4linux v0.9.1 ( http://labs.portcullis.co.uk/application/enum4linux/ ) on Tue Nov 12 17:56:18 2024

 =========================================( Target Information )=========================================

Target ........... 10.10.11.42
RID Range ........ 500-550,1000-1050
Username ......... 'Olivia'
Password ......... 'ichliebedich'
Known Usernames .. administrator, guest, krbtgt, domain admins, root, bin, none


 ============================( Enumerating Workgroup/Domain on 10.10.11.42 )============================


[E] Can't find workgroup/domain



 ====================================( Session Check on 10.10.11.42 )====================================


[+] Server 10.10.11.42 allows sessions using username 'Olivia', password 'ichliebedich'


 =================================( Getting domain SID for 10.10.11.42 )=================================

Domain Name: ADMINISTRATOR
Domain Sid: S-1-5-21-1088858960-373806567-254189436

[+] Host is part of a domain (not a workgroup)


 =======================================( Groups on 10.10.11.42 )=======================================


[+] Getting builtin groups:

group:[Server Operators] rid:[0x225]
group:[Account Operators] rid:[0x224]
group:[Pre-Windows 2000 Compatible Access] rid:[0x22a]
group:[Incoming Forest Trust Builders] rid:[0x22d]
group:[Windows Authorization Access Group] rid:[0x230]
group:[Terminal Server License Servers] rid:[0x231]
group:[Administrators] rid:[0x220]
group:[Users] rid:[0x221]
group:[Guests] rid:[0x222]
group:[Print Operators] rid:[0x226]
group:[Backup Operators] rid:[0x227]
group:[Replicator] rid:[0x228]
group:[Remote Desktop Users] rid:[0x22b]
group:[Network Configuration Operators] rid:[0x22c]
group:[Performance Monitor Users] rid:[0x22e]
group:[Performance Log Users] rid:[0x22f]
group:[Distributed COM Users] rid:[0x232]
group:[IIS_IUSRS] rid:[0x238]
group:[Cryptographic Operators] rid:[0x239]
group:[Event Log Readers] rid:[0x23d]
group:[Certificate Service DCOM Access] rid:[0x23e]
group:[RDS Remote Access Servers] rid:[0x23f]
group:[RDS Endpoint Servers] rid:[0x240]
group:[RDS Management Servers] rid:[0x241]
group:[Hyper-V Administrators] rid:[0x242]
group:[Access Control Assistance Operators] rid:[0x243]
group:[Remote Management Users] rid:[0x244]
group:[Storage Replica Administrators] rid:[0x246]

[+]  Getting builtin group memberships:

Group: Guests' (RID: 546) has member: ADMINISTRATOR\Guest
Group: Guests' (RID: 546) has member: ADMINISTRATOR\Domain Guests
Group: Users' (RID: 545) has member: NT AUTHORITY\INTERACTIVE
Group: Users' (RID: 545) has member: NT AUTHORITY\Authenticated Users
Group: Users' (RID: 545) has member: ADMINISTRATOR\Domain Users
Group: Pre-Windows 2000 Compatible Access' (RID: 554) has member: NT AUTHORITY\Authenticated Users
Group: Administrators' (RID: 544) has member: ADMINISTRATOR\Administrator
Group: Administrators' (RID: 544) has member: ADMINISTRATOR\Enterprise Admins
Group: Administrators' (RID: 544) has member: ADMINISTRATOR\Domain Admins
Group: Remote Management Users' (RID: 580) has member: ADMINISTRATOR\olivia
Group: Remote Management Users' (RID: 580) has member: ADMINISTRATOR\michael
Group: Remote Management Users' (RID: 580) has member: ADMINISTRATOR\emily
Group: Windows Authorization Access Group' (RID: 560) has member: NT AUTHORITY\ENTERPRISE DOMAIN CONTROLLERS

[+]  Getting local groups:

group:[Cert Publishers] rid:[0x205]
group:[RAS and IAS Servers] rid:[0x229]
group:[Allowed RODC Password Replication Group] rid:[0x23b]
group:[Denied RODC Password Replication Group] rid:[0x23c]
group:[DnsAdmins] rid:[0x44d]
group:[Share Moderators] rid:[0x457]

[+]  Getting local group memberships:

Group: Share Moderators' (RID: 1111) has member: Could not initialise pipe samr. Error was NT_STATUS_INVALID_NETWORK_RESPONSE
Group: Denied RODC Password Replication Group' (RID: 572) has member: ADMINISTRATOR\krbtgt
Group: Denied RODC Password Replication Group' (RID: 572) has member: ADMINISTRATOR\Domain Controllers
Group: Denied RODC Password Replication Group' (RID: 572) has member: ADMINISTRATOR\Schema Admins
Group: Denied RODC Password Replication Group' (RID: 572) has member: ADMINISTRATOR\Enterprise Admins
Group: Denied RODC Password Replication Group' (RID: 572) has member: ADMINISTRATOR\Cert Publishers
Group: Denied RODC Password Replication Group' (RID: 572) has member: ADMINISTRATOR\Domain Admins
Group: Denied RODC Password Replication Group' (RID: 572) has member: ADMINISTRATOR\Group Policy Creator Owners
Group: Denied RODC Password Replication Group' (RID: 572) has member: ADMINISTRATOR\Read-only Domain Controllers

[+]  Getting domain groups:

group:[Enterprise Read-only Domain Controllers] rid:[0x1f2]
group:[Domain Admins] rid:[0x200]
group:[Domain Users] rid:[0x201]
group:[Domain Guests] rid:[0x202]
group:[Domain Computers] rid:[0x203]
group:[Domain Controllers] rid:[0x204]
group:[Schema Admins] rid:[0x206]
group:[Enterprise Admins] rid:[0x207]
group:[Group Policy Creator Owners] rid:[0x208]
group:[Read-only Domain Controllers] rid:[0x209]
group:[Cloneable Domain Controllers] rid:[0x20a]
group:[Protected Users] rid:[0x20d]
group:[Key Admins] rid:[0x20e]
group:[Enterprise Key Admins] rid:[0x20f]
group:[DnsUpdateProxy] rid:[0x44e]

[+]  Getting domain group memberships:

:Group: 'Domain Controllers' (RID: 516) has member: ADMINISTRATOR\DC$
Group: 'Domain Guests' (RID: 514) has member: ADMINISTRATOR\Guest
Group: 'Domain Admins' (RID: 512) has member: ADMINISTRATOR\Administrator
Group: 'Schema Admins' (RID: 518) has member: ADMINISTRATOR\Administrator
Group: 'Group Policy Creator Owners' (RID: 520) has member: ADMINISTRATOR\Administrator
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\Administrator
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\krbtgt
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\olivia
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\michael
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\benjamin
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\emily
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\ethan
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\alexander
Group: 'Domain Users' (RID: 513) has member: ADMINISTRATOR\emma
Group: 'Enterprise Admins' (RID: 519) has member: ADMINISTRATOR\Administrator
enum4linux complete on Tue Nov 12 18:02:45 2024

➜  Administrator git:(main) ✗ :

        ldapsearch -x -H ldap://10.10.11.42 -b "DC=administrator,DC=htb0" "(objectClass=group)"
        
        ldapsearch -x -H ldap://10.10.11.42 -b "DC=administrator,DC=htb0" -D "CN=Olivia,CN=Users,DC=administrator,DC=htb0" -W "(objectClass=group)"

        ldapdomaindump 10.10.11.42 -u '<domain>\Olivia' -p 'ichliebedich' --authtype SIMPLE --no-json --no-grep -o /path/dir

        nmap -p 389 --script ldap-search -v 10.10.11.42

Enumerating LDAP users and groups:
        
        nmap -p 389 --script "ldap* and not brute" 10.10.11.42

# Using CrackMapExec (CME)
CrackMapExec is another useful tool for enumerating information from SMB, LDAP, and other services in Active Directory environments.

Example Command:
Enumerating users:
        
        crackmapexec ldap 10.10.11.42 -u 'Olivia' -p 'ichliebedich' --users
Enumerating groups and group memberships:
        
        crackmapexec ldap 10.10.11.42 -u 'Olivia' -p 'ichliebedich' --groups
Enumerating shares:
        
        crackmapexec smb 10.10.11.42 -u 'Olivia' -p 'ichliebedich' --shares
# Using Enum4Linux
Enum4Linux is another tool specifically designed for enumerating information from Windows servers, including Active Directory.
Example Command:
Enumerating domain users:
        
        enum4linux -u Olivia -p ichliebedich -h 10.10.11.42
Getting detailed information about groups:
        
        enum4linux -u Olivia -p ichliebedich -G 10.10.11.42

Enumerating Users (-U):
        
        enum4linux -U -u Olivia -p 'ichliebedich' 10.10.11.42
-U: Enumerate user list.
-u Olivia: Specify a username for authentication.
-p 'ichliebedich': Specify a password.
10.10.11.42: Target IP address of the LDAP server or Windows machine.

Enumerating Group Information (-G):
        
        enum4linux -G -u Olivia -p 'ichliebedich' 10.10.11.42
-G: Enumerate group and member list.
Password Policy (-P):
enum4linux -P -u Olivia -p 'ichliebedich' 10.10.11.42
-P: Retrieve password policy information.

Getting Shares (-S):
        
        enum4linux -S -u Olivia -p 'ichliebedich' 10.10.11.42
-S: Enumerate shares.
Perform All Enumeration (-a):
If you want to perform all enumeration in one go, you can use the -a option:

        enum4linux -a -u Olivia -p 'ichliebedich' 10.10.11.42
This will run all the default enumeration tasks (-U -S -G -P -r -o -n -i).


Advanced Features
If you want more advanced enumeration, you can use features such as RID cycling (-r), aggressive enumeration (-A), or LDAP enumeration (-l).

RID Cycling (-r):
        
        enum4linux -r -u Olivia -p 'ichliebedich' 10.10.11.42
This option is useful for enumerating users when "RestrictAnonymous" is enabled.

Aggressive Enumeration (-A):
        
        enum4linux -A -u Olivia -p 'ichliebedich' 10.10.11.42
This enables aggressive checks on shares, which can help in gathering additional information from the target.

LDAP Enumeration (-l):
        
        enum4linux -l -u Olivia -p 'ichliebedich' 10.10.11.42
This option is useful for DCs (Domain Controllers) to get LDAP-specific information.

Step 4: Verifying Output
After running these commands, enum4linux will provide detailed output about the target machine. Look for:

User accounts: Displayed under userlist.
Groups: Displayed under grouplist.
Shares: Displayed under sharelist.
Password policies: Displayed under password policy.
These results will provide critical information for further enumeration or exploitation during a penetration test.

Troubleshooting:
If you encounter issues with missing dependencies or permissions:

Ensure you have the required tools installed (samba, rpcclient, etc.).
Verify that you can reach the target machine (use ping or nmap to check connectivity).
Ensure the username/password you are using is valid for the remote machine.

# Manual LDAP Query
If you have valid credentials and access to the LDAP service, you can perform more specific queries for domain details. Below are examples of what you can look for manually:

Finding all users:
        
        ldapsearch -x -H ldap://10.10.11.42 -b "dc=administrator,dc=htb" "(objectClass=user)" 
Finding all groups:
        
        ldapsearch -x -H ldap://10.10.11.42 -b "dc=administrator,dc=htb" "(objectClass=group)"
Key Information to Look for:
User Accounts:
Look for the sAMAccountName, userPrincipalName, cn, and other attributes related to user objects.
Group memberships can often be found in the memberOf attribute.
Group Information:

Groups are typically located in objectClass=group. Look for cn (group name) and member (which users are in the group).
Domain Information:

The rootDSE or the ldap-rootdse attribute contains crucial information about the domain, such as the domain name, domain controller info, and available LDAP controls.
Password Policy:

You can check for LDAP policies such as password length, expiration, and lockout settings. These are useful for understanding the security posture.




























General Information:
Target IP Address: 10.10.11.42
Username: Olivia
Password: ichliebedich
Domain SID: S-1-5-21-1088858960-373806567-254189436
Domain Name: ADMINISTRATOR (This system is part of a domain, not a workgroup)
Group Information:
Builtin Groups:
Server Operators (RID: 0x225)
Account Operators (RID: 0x224)
Pre-Windows 2000 Compatible Access (RID: 0x22a)
Incoming Forest Trust Builders (RID: 0x22d)
Windows Authorization Access Group (RID: 0x230)
Terminal Server License Servers (RID: 0x231)
Administrators (RID: 0x220) – Has important members, see below.
Users (RID: 0x221)
Guests (RID: 0x222)
Print Operators (RID: 0x226)
Backup Operators (RID: 0x227)
Replicator (RID: 0x228)
Remote Desktop Users (RID: 0x22b)
Network Configuration Operators (RID: 0x22c)
Performance Monitor Users (RID: 0x22e)
Performance Log Users (RID: 0x22f)
Distributed COM Users (RID: 0x232)
IIS_IUSRS (RID: 0x238)
Cryptographic Operators (RID: 0x239)
Event Log Readers (RID: 0x23d)
Certificate Service DCOM Access (RID: 0x23e)
RDS Remote Access Servers (RID: 0x23f)
RDS Endpoint Servers (RID: 0x240)
RDS Management Servers (RID: 0x241)
Hyper-V Administrators (RID: 0x242)
Access Control Assistance Operators (RID: 0x243)
Remote Management Users (RID: 0x244)
Storage Replica Administrators (RID: 0x246)
Builtin Group Memberships:
Guests (RID: 546):

Members: ADMINISTRATOR\Guest, ADMINISTRATOR\Domain Guests
Users (RID: 545):

Members: NT AUTHORITY\INTERACTIVE, NT AUTHORITY\Authenticated Users, ADMINISTRATOR\Domain Users
Pre-Windows 2000 Compatible Access (RID: 554):

Members: NT AUTHORITY\Authenticated Users
Administrators (RID: 544):

Members:
ADMINISTRATOR\Administrator
ADMINISTRATOR\Enterprise Admins
ADMINISTRATOR\Domain Admins
Remote Management Users (RID: 580):

Members:
ADMINISTRATOR\olivia
ADMINISTRATOR\michael
ADMINISTRATOR\emily
Windows Authorization Access Group (RID: 560):

Members: NT AUTHORITY\ENTERPRISE DOMAIN CONTROLLERS
Local Groups:
Cert Publishers (RID: 0x205)
RAS and IAS Servers (RID: 0x229)
Allowed RODC Password Replication Group (RID: 0x23b)
Denied RODC Password Replication Group (RID: 0x23c) – Multiple important members.
DnsAdmins (RID: 0x44d)
Share Moderators (RID: 0x457) – Memberships couldn't be retrieved due to error: NT_STATUS_INVALID_NETWORK_RESPONSE
Local Group Memberships:
Share Moderators (RID: 1111):

Membership error: Could not initialize pipe samr. Error: NT_STATUS_INVALID_NETWORK_RESPONSE
Denied RODC Password Replication Group (RID: 572):

Members:
ADMINISTRATOR\krbtgt
ADMINISTRATOR\Domain Controllers
ADMINISTRATOR\Schema Admins
ADMINISTRATOR\Enterprise Admins
ADMINISTRATOR\Cert Publishers
ADMINISTRATOR\Domain Admins
ADMINISTRATOR\Group Policy Creator Owners
ADMINISTRATOR\Read-only Domain Controllers
Domain Groups:
Enterprise Read-only Domain Controllers (RID: 0x1f2)
Domain Admins (RID: 0x200)
Domain Users (RID: 0x201) – Includes multiple users, see below.
Domain Guests (RID: 0x202)
Domain Computers (RID: 0x203)
Domain Controllers (RID: 0x204)
Schema Admins (RID: 0x206)
Enterprise Admins (RID: 0x207)
Group Policy Creator Owners (RID: 0x208)
Read-only Domain Controllers (RID: 0x209)
Cloneable Domain Controllers (RID: 0x20a)
Protected Users (RID: 0x20d)
Key Admins (RID: 0x20e)
Enterprise Key Admins (RID: 0x20f)
DnsUpdateProxy (RID: 0x44e)
Domain Group Memberships:
Domain Controllers (RID: 516):

Members: ADMINISTRATOR\DC$
Domain Guests (RID: 514):

Members: ADMINISTRATOR\Guest
Domain Admins (RID: 512):

Members:
ADMINISTRATOR\Administrator
Schema Admins (RID: 518):

Members: ADMINISTRATOR\Administrator
Group Policy Creator Owners (RID: 520):

Members: ADMINISTRATOR\Administrator
Domain Users (RID: 513):

Members:
ADMINISTRATOR\Administrator
ADMINISTRATOR\krbtgt
ADMINISTRATOR\olivia
ADMINISTRATOR\michael
ADMINISTRATOR\benjamin
ADMINISTRATOR\emily
ADMINISTRATOR\ethan
ADMINISTRATOR\alexander
ADMINISTRATOR\emma
Enterprise Admins (RID: 519):

Members: ADMINISTRATOR\Administrator
Key User Findings:
Administrator Account:

Username: Administrator
Group Memberships:
Administrators (Domain Admins)
Enterprise Admins
Domain Users
Schema Admins
Olivia:

Username: olivia
Group Memberships:
Domain Users
Remote Management Users (along with michael and emily)
Michael:

Username: michael
Group Memberships:
Domain Users
Remote Management Users
Emily:

Username: emily
Group Memberships:
Domain Users
Remote Management Users
Other Users:

Domain Users: benjamin, ethan, alexander, emma
Administrator's Special Accounts: krbtgt, DC$, Guest
Summary of Potential Security Implications:
Domain Admins: The Administrator account has full domain-level control and is a member of highly sensitive groups like Domain Admins, Enterprise Admins, and Schema Admins.
Remote Management Users: The presence of multiple users like olivia, michael, and emily in the Remote Management Users group may indicate authorized users who have remote access rights.
Denial of RODC Replication: The Denied RODC Password Replication Group contains critical accounts like krbtgt and Domain Admins, suggesting some form of password protection on replication.
This information can be valuable for understanding the structure of the network, its security configuration, and potentially leveraging vulnerabilities for lateral movement or privilege escalation.





Using kerbrute
Once installed, you can use kerbrute to perform Kerberos brute-force attacks. Here is an example of how to use kerbrute for Kerberos enumeration:

        kerbrute userenum --domain <DOMAIN> --users users.txt --dc-ip <DC_IP>