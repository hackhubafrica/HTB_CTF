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



In the context of networking and file sharing, especially in environments like Windows networking or SMB (Server Message Block), the terms domain names, groups, and shares have distinct meanings and uses. Here’s a breakdown of each concept, along with some common examples:

1. Domain Names
A domain name refers to the network name of a domain, which is a logical group of computers or resources under a central management (such as Active Directory in Windows). It's typically used in larger networks to group and manage machines (servers, workstations, etc.) centrally. The domain name is used to reference the whole domain in various networking protocols (such as DNS, Kerberos, etc.).

Purpose: Domain names enable centralized authentication and management. It’s easier to manage user access, policies, and resources when they are part of a domain.

Examples:

example.com: A typical domain name that could represent the domain of a company or organization.
corp.local: A local domain name often used within an internal company network, especially in Active Directory environments.
Domain Controller (DC): In Windows environments, a domain controller manages the domain, handles authentication, and stores directory information about users, computers, groups, and policies within that domain.

2. Groups
Groups refer to collections of users or objects within a domain or a system. Groups are primarily used to organize users for easier administration and to assign permissions or roles to multiple users at once. This makes it more efficient to manage access to resources and policies.

Purpose: Groups are used to grant or restrict access to resources (like files, folders, or applications). They simplify permission management, as permissions can be granted to the group, and all members of the group inherit those permissions.

Types of Groups:

Security Groups: These groups are used for managing permissions and access control within a domain.
Distribution Groups: These are used primarily for email distribution purposes in Microsoft Exchange or similar systems (not for managing security permissions).
Examples:

Domain Users: A built-in group in Windows that includes all users in the domain.
Administrators: A group that typically has full control over systems and resources.
Power Users: Users in this group have more privileges than standard users but less than administrators.
Sales, HR, IT Support: Custom groups that might be created to restrict or grant access to specific department resources or systems.
3. Shares
A share refers to a folder or directory on a server or a computer that has been made available over the network. Shares are typically used for file sharing and are often managed through protocols like SMB (Server Message Block) or NFS (Network File System).

Purpose: Shares allow multiple users or systems to access and work on the same files over a network. Shares can be configured with different access permissions (read, write, execute) for different users or groups.

Types of Shares:

File Shares: Allow users to access files remotely (e.g., a folder on a file server).
Printer Shares: Allow users to share printers over the network.
Access Control: Shares are typically configured with different levels of permissions. For instance:

Read-Only Share: Users can only read files from the share but cannot modify or delete them.
Read-Write Share: Users can both read and write to files in the share.
Examples:

\server\fileshare: A file share on a server where documents, files, and folders are stored for network access.
\server\public: A share that might be made public for all users to read, but not modify.
\fileserver\documents: A share dedicated to storing documents that only specific users (like members of the "Sales" group) can access.
Summary of Differences
Concept Purpose Example Common Usage
Domain Names    Network-wide identification, centralized management example.com, corp.local Used for managing large networks (Active Directory)
Groups  Organizing users for permissions and management Domain Users, Administrators, Sales Used for permission management in a network
Shares  File or resource access over a network  \\server\fileshare, \\fileserver\documents  Used for file sharing or other resource sharing in a network
Common Use Cases
Domain Names: In a Windows domain environment, users authenticate through a domain name (e.g., Olivia@example.com) and can access shared resources.
Groups: If a company has a department like HR, a security group called HR could be created to grant members access to HR-related files on the network.
Shares: If a file server has a folder called Documents, the folder can be shared over the network (as \\fileserver\Documents), and access can be controlled based on group membership (e.g., only the HR group has access).
If you're performing penetration testing and interacting with services like FTP, SMB, or LDAP, understanding these concepts can help you identify which services are accessible and how to enumerate or gain access to resources based on group memberships or share configurations.











































There are several well-established methodologies for conducting penetration testing on Windows environments. These methodologies outline the steps and techniques for identifying vulnerabilities, exploiting them, and escalating privileges within a Windows network. Below are some key resources and methodologies to help you in your penetration testing efforts for Windows environments:

1. OWASP Testing Guide
Resource: OWASP Testing Guide
The OWASP Web Security Testing Guide provides comprehensive guidance on performing penetration tests across various platforms, including Windows. It includes detailed steps for testing web applications, which is relevant if you're targeting Windows-based web applications. Though it focuses on web applications, it includes network services and infrastructure testing as well.
2. MITRE ATT&CK Framework
Resource: MITRE ATT&CK for Enterprise

The MITRE ATT&CK framework provides a detailed matrix of tactics, techniques, and procedures (TTPs) used by adversaries, which includes attacks specific to Windows environments.

For Windows, it covers areas like initial access, execution, privilege escalation, defense evasion, credential access, discovery, lateral movement, collection, and exfiltration.

The ATT&CK for Windows matrix breaks down techniques based on the Windows operating system, showing the most common attack methods:

Sudo (T1071): Remote Execution through SMB, WMI, etc.
Credential Dumping (T1003): Using tools like Mimikatz to extract Windows credentials.
3. Pentesting Windows Guide (by Offensive Security)
Resource: Offensive Security’s Windows Pentesting Guide
Offensive Security offers extensive resources, especially through their Kali Linux and OSCP certification courses, which focus heavily on Windows exploitation, enumeration, and privilege escalation.
In addition, their Penetration Testing with Kali Linux (PWK) course material provides a detailed breakdown of Windows pen-testing techniques, tools, and approaches.
4. The Windows Penetration Testing Methodology (by TCM Security)
Resource: TCM Security - Windows Penetration Testing
This is a complete guide dedicated to penetration testing in Windows environments. It provides both practical examples and explanations of each step in a Windows penetration test, including:
Footprinting: Gathering information about the target network.
Enumeration: SMB, LDAP, and Kerberos enumeration.
Exploitation: Using tools like Metasploit, MSFvenom, and others to exploit Windows-specific vulnerabilities.
Post-Exploitation: Tools and techniques for privilege escalation, lateral movement, and persistence in Windows.
5. Hacking Windows Machines (by Hack The Box)
Resource: Hack The Box - Windows Challenges
Hack The Box (HTB) offers numerous Windows-specific challenges where you can practice penetration testing in realistic environments. These challenges are designed to teach enumeration, exploitation, and privilege escalation, focusing on Windows machines.
HTB’s machines often simulate various Windows environments, including those with misconfigurations, weak SMB settings, and unpatched vulnerabilities.
6. Practical Windows Exploitation (by SANS Institute)
Resource: SANS Windows Exploitation Course
SANS Institute offers a Windows Exploitation training course (SEC504), which is a comprehensive, practical approach to exploiting Windows systems. It covers everything from initial enumeration to post-exploitation.
The course provides hands-on experience with various Windows services like SMB, Kerberos, and LDAP, and includes techniques for privilege escalation, lateral movement, and persistence.
7. Books and Publications
Book: "The Hacker Playbook 3: Practical Guide To Penetration Testing" by Peter Kim
This book offers practical step-by-step penetration testing techniques for Windows environments, including information gathering, exploitation, privilege escalation, and lateral movement.
Book: "Windows Privilege Escalation for Penetration Testers" by Jason R. McCullar
This book focuses on Windows-specific privilege escalation techniques, which are crucial for taking over Windows machines once initial access is gained.
Book: "The Web Application Hacker's Handbook" by Dafydd Stuttard and Marcus Pinto
While focusing on web apps, this book touches upon Windows-based environments and web service attacks (IIS, SMB, RDP, etc.).
8. Tools Commonly Used in Windows Penetration Testing
Nmap: For network scanning and service enumeration.

Commands like nmap -p 445 --script smb-enum-shares <target_ip> can help you enumerate SMB shares on a Windows machine.
Metasploit: A powerful framework used for exploitation, including Windows-specific exploits like MS17-010 (EternalBlue).

Mimikatz: A tool for credential dumping, useful for post-exploitation to extract Windows credentials.

BloodHound: For mapping Active Directory attack paths and privilege escalation in a Windows domain.

Empire: A post-exploitation tool for Windows, useful for lateral movement and persistence.

9. Windows Penetration Testing Checklist
A penetration testing checklist for Windows systems can help guide the process. Here's a simplified checklist to follow:

Reconnaissance and Information Gathering
Identify IP ranges and hostnames.
Enumerate open ports and services (use Nmap, Netcat, etc.).
Get information on domain names, workgroups, and users.
Service Enumeration
Use tools like nmap, enum4linux, smbclient, and ldapsearch to gather information about:
SMB shares.
Active Directory and Kerberos configurations.
Running services and exposed ports.
Exploitation
Try known exploits for unpatched services (SMB, RDP, etc.).
Use Metasploit or manual exploitation (EternalBlue, MS17-010, etc.).
Post-Exploitation
Dump credentials with Mimikatz or Windows Credential Editor.
Look for weak configurations or misconfigured permissions for privilege escalation.
Lateral Movement
Use WMI, PSEXEC, or SMB for lateral movement to other systems in the network.
Privilege Escalation
Identify and exploit vulnerabilities like weak file permissions, unquoted service paths, or token impersonation.
Persistence
Set up backdoors using Netcat, or create new user accounts with administrative privileges.
Conclusion
You can find methodologies and resources for Windows penetration testing through various channels including books, frameworks like MITRE ATT&CK, specialized security training (e.g., Offensive Security, SANS), and hands-on platforms like Hack The Box. By following these resources, you’ll be able to structure your approach to Windows penetration testing and improve your overall effectiveness during engagements.