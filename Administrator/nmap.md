➜  Administrator nmap 10.10.11.42 
Starting Nmap 7.95 ( https://nmap.org ) at 2024-11-11 18:20 EAT
Stats: 0:00:49 elapsed; 0 hosts completed (1 up), 1 undergoing Connect Scan
Connect Scan Timing: About 46.69% done; ETC: 18:21 (0:00:56 remaining)
Stats: 0:02:57 elapsed; 0 hosts completed (1 up), 1 undergoing Connect Scan
Connect Scan Timing: About 85.13% done; ETC: 18:23 (0:00:31 remaining)
Nmap scan report for 10.10.11.42
Host is up (0.75s latency).
Not shown: 987 closed tcp ports (conn-refused)
PORT     STATE SERVICE
21/tcp   open  ftp
53/tcp   open  domain
88/tcp   open  kerberos-sec
135/tcp  open  msrpc
139/tcp  open  netbios-ssn
389/tcp  open  ldap
445/tcp  open  microsoft-ds
464/tcp  open  kpasswd5
593/tcp  open  http-rpc-epmap
636/tcp  open  ldapssl
3268/tcp open  globalcatLDAP
3269/tcp open  globalcatLDAPssl
5985/tcp open  wsman

Nmap done: 1 IP address (1 host up) scanned in 300.28 seconds

ldap port 389 ,636 , 3268 ,3269
