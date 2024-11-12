➜  Administrator git:(main) ✗ enum4linux -u Olivia -p ichliebedich -G 10.10.11.42

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

