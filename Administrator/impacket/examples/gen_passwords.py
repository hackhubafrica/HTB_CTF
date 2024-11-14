import random
import string

# Password parameters based on the provided policy
password_length = 7
num_passwords = 1000  # Number of passwords to generate

# Function to generate a random password
def generate_password():
    characters = string.ascii_letters + string.digits  # Letters (upper + lower) + digits
    return ''.join(random.choice(characters) for _ in range(password_length))

# Generate the password list and save it to a file
passwords = [generate_password() for _ in range(num_passwords)]

# Write the passwords to a file
with open("generated_passwords.txt", "w") as f:
    for password in passwords:
        f.write(password + "\n")

print(f"Generated {num_passwords} passwords and saved to 'generated_passwords.txt'")

