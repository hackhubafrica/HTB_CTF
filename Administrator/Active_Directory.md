Active Directory serves as a foundational technology, enabling network administrators to efficiently create and manage domains, users, and objects within a network. It is engineered to scale, facilitating the organization of an extensive number of users into manageable groups and subgroups, while controlling access rights at various levels.

The structure of Active Directory is comprised of three primary layers: domains, trees, and forests. A domain encompasses a collection of objects, such as users or devices, sharing a common database. Trees are groups of these domains linked by a shared structure, and a forest represents the collection of multiple trees, interconnected through trust relationships, forming the uppermost layer of the organizational structure. Specific access and communication rights can be designated at each of these levels.

Key concepts within Active Directory include:

Directory – Houses all information pertaining to Active Directory objects.

Object – Denotes entities within the directory, including users, groups, or shared folders.

Domain – Serves as a container for directory objects, with the capability for multiple domains to coexist within a forest, each maintaining its own object collection.

Tree – A grouping of domains that share a common root domain.

Forest – The pinnacle of organizational structure in Active Directory, composed of several trees with trust relationships among them.

Active Directory Domain Services (AD DS) encompasses a range of services critical for the centralized management and communication within a network. These services comprise:

Domain Services – Centralizes data storage and manages interactions between users and domains, including authentication and search functionalities.

Certificate Services – Oversees the creation, distribution, and management of secure digital certificates.

Lightweight Directory Services – Supports directory-enabled applications through the LDAP protocol.

Directory Federation Services – Provides single-sign-on capabilities to authenticate users across multiple web applications in a single session.

Rights Management – Assists in safeguarding copyright material by regulating its unauthorized distribution and use.

DNS Service – Crucial for the resolution of domain names.




# Pentest the network:

Scan the network, find machines and open ports and try to exploit vulnerabilities or extract credentials from them (for example, printers could be very interesting targets.

Enumerating DNS could give information about key servers in the domain as web, printers, shares, vpn, media, etc.

    gobuster dns -d domain.local -t 25 -w /opt/Seclist/Discovery/DNS/subdomain-top2000.txt


Check for null and Guest access on smb services (this won't work on modern Windows versions):

    enum4linux -a -u "" -p "" <DC IP> && enum4linux -a -u "guest" -p "" <DC IP>

    smbmap -u "" -p "" -P 445 -H <DC IP> && smbmap -u "guest" -p "" -P 445 -H <DC IP>

    smbclient -U '%' -L //<DC IP> && smbclient -U 'guest%' -L //

Enumerate Ldap
    
    nmap -n -sV --script "ldap* and not brute" -p 389 <DC IP>


    
    Poison the network

# Gather credentials impersonating services with Responder

Access host by abusing the relay attack

Gather credentials exposing fake UPnP services with evil-SSDP

OSINT:

Extract usernames/names from internal documents, social media, services (mainly web) inside the domain environments and also from the publicly available.


Tools:

w0Tx/generate-ad-username : https://github.com/w0Tx/generate-ad-username

urbanadventurer/username-anarchy: https://github.com/urbanadventurer/username-anarchy



# User enumeration
Anonymous SMB/LDAP enum: Check the pentesting SMB and pentesting LDAP pages.

Kerbrute enum: When an invalid username is requested the server will respond using the Kerberos error code KRB5KDC_ERR_C_PRINCIPAL_UNKNOWN, allowing us to determine that the username was invalid. Valid usernames will illicit either the TGT in a AS-REP response or the error KRB5KDC_ERR_PREAUTH_REQUIRED, indicating that the user is required to perform pre-authentication.


    ./kerbrute_linux_amd64 userenum -d lab.ropnop.com --dc 10.10.10.10 usernames.txt #From https://github.com/ropnop/kerbrute/releases

    nmap -p 88 --script=krb5-enum-users --script-args="krb5-enum-users.realm='DOMAIN'" <IP>
    Nmap -p 88 --script=krb5-enum-users --script-args krb5-enum-users.realm='<domain>',userdb=/root/Desktop/usernames.txt <IP>

    msf> use auxiliary/gather/kerberos_enumusers

    crackmapexec smb dominio.es  -u '' -p '' --users | awk '{print $4}' | uniq

    
    
Credentials Reuse
If you have the hash or password of a local administrator you should try to login locally to other PCs with it.
    
    crackmapexec smb --local-auth 10.10.10.10/23 -u administrator -H 10298e182387f9cab376ecd08491764a0 | grep +
