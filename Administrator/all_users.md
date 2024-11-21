
*Evil-WinRM* PS C:\Users\olivia\Documents> Get-ADGroupMember -Identity "Remote Management Users"
 


distinguishedName : CN=Emily Rodriguez,CN=Users,DC=administrator,DC=htb
name              : Emily Rodriguez
objectClass       : user
objectGUID        : e6651333-cfc8-4cb3-a279-c42e8edfa000
SamAccountName    : emily
SID               : S-1-5-21-1088858960-373806567-254189436-1112

distinguishedName : CN=Michael Williams,CN=Users,DC=administrator,DC=htb
name              : Michael Williams
objectClass       : user
objectGUID        : 4bf6d1d4-02dc-434c-8dd7-cf73b81063a1
SamAccountName    : michael
SID               : S-1-5-21-1088858960-373806567-254189436-1109

distinguishedName : CN=Olivia Johnson,CN=Users,DC=administrator,DC=htb
name              : Olivia Johnson
objectClass       : user
objectGUID        : 9fd68e85-385d-4b7b-8b99-2559b11e8b37
SamAccountName    : olivia
SID               : S-1-5-21-1088858960-373806567-254189436-1108





*Evil-WinRM* PS C:\Users\olivia\Documents> Get-ADUser -Filter * -Property MemberOf | Select-Object Name, MemberOf
 

Name             MemberOf
----             --------
Administrator    {CN=Group Policy Creator Owners,CN=Users,DC=administrator,DC=htb, CN=Domain Admins,CN=Users,DC=administrator,DC=htb, CN=Enterprise Admins,CN=Users,DC=administrator,DC=htb, CN=Schema Admins,CN=Users,DC=administrator,DC=htb...}
Guest            {CN=Guests,CN=Builtin,DC=administrator,DC=htb}
krbtgt           {CN=Denied RODC Password Replication Group,CN=Users,DC=administrator,DC=htb}
Olivia Johnson   {CN=Remote Management Users,CN=Builtin,DC=administrator,DC=htb}
Michael Williams {CN=Remote Management Users,CN=Builtin,DC=administrator,DC=htb}
Benjamin Brown   {CN=Share Moderators,CN=Users,DC=administrator,DC=htb}
Emily Rodriguez  {CN=Remote Management Users,CN=Builtin,DC=administrator,DC=htb}
Ethan Hunt       {}
Alexander Smith  {}
Emma Johnson     {}


