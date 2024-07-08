import requests

# Your generated JWT token
jwt_token = "eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJodHRwOi8vc2NoZW1hcy54bWxzb2FwLm9yZy93cy8yMDA1LzA1L2lkZW50aXR5L2NsYWltcy9lbWFpbGFkZHJlc3MiOiJzdXBlcmFkbWluQGJsYXpvcml6ZWQuaHRiIiwiaHR0cDovL3NjaGVtYXMubWljcm9zb2Z0LmNvbS93cy8yMDA4LzA2L2lkZW50aXR5L2NsYWltcy9yb2xlIjoiU3VwZXJfQWRtaW4iLCJpc3MiOiJodHRwOi8vYXBpLmJsYXpvcml6ZWQuaHRiIiwiYXVkIjoiaHR0cDovL2FkbWluLmJsYXpvcml6ZWQuaHRiIiwiZXhwIjoxNzIwNDQxMDc5fQ.AFN2wnvfJeUleUNEWhbXAuaIEw1lcdvzypGipwfNQ90J99uM1nQ90y_IRsm2WJnDxD3yI_Blw2Kd2ZLm_wv3-w"

# Set the headers with the Authorization token
headers = {
    "Authorization": f"Bearer {jwt_token}"
}

# Make a request to the protected endpoint
response = requests.get("http://admin.blazorized.htb", headers=headers)

print(response.text)
