#!/usr/bin/env python3

import sys
import struct
from binascii import hexlify
import os

MAGIC = b"PWS3"  # Expected magic string for Password Safe V3 files


def process_file(filename):
    try:
        # Open the file in binary mode
        with open(filename, "rb") as f:
            # Verify the magic string
            magic = f.read(4)
            if magic != MAGIC:
                print(f"[!] {filename} : PWS3 magic string missing. Is this a Password Safe file?", file=sys.stderr)
                return

            # Read the salt (32 bytes)
            salt = f.read(32)
            if len(salt) != 32:
                print(f"[!] {filename} : Error reading salt. File might be corrupted.", file=sys.stderr)
                return

            # Read the iteration count (4 bytes, big-endian)
            iterations_data = f.read(4)
            if len(iterations_data) != 4:
                print(f"[!] {filename} : Error reading iteration count.", file=sys.stderr)
                return
            iterations = struct.unpack(">I", iterations_data)[0]

            # Read the hash (32 bytes)
            hash_data = f.read(32)
            if len(hash_data) != 32:
                print(f"[!] {filename} : Error reading hash. File might be incomplete.", file=sys.stderr)
                return

            # Output the hash in John the Ripper format
            basename = os.path.basename(filename).rstrip(".psafe3")
            formatted_output = (
                f"{basename}:$pwsafe$*3*{hexlify(salt).decode()}*{iterations}*{hexlify(hash_data).decode()}"
            )
            print(formatted_output)

    except FileNotFoundError:
        print(f"[!] {filename} : File not found.", file=sys.stderr)
    except Exception as e:
        print(f"[!] {filename} : An unexpected error occurred: {e}", file=sys.stderr)


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: custom_pwsafe2john.py [.psafe3 files]")
        sys.exit(1)

    # Process each file provided as a command-line argument
    for i in range(1, len(sys.argv)):
        process_file(sys.argv[i])
