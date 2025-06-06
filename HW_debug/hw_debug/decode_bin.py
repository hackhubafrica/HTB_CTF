import serial

# Open the binary file (assuming you know the format)
with open("digital-0.bin", "rb") as f:
    raw_data = f.read()

# Simulate reading data from a serial port with known settings
ser = serial.Serial('/dev/sda', baudrate=9600, timeout=1)
ser.write(raw_data)

# Now listen for the decoded output
print(ser.read(100))  # Read 100 bytes of decoded serial data
