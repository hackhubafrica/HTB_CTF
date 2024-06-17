from flask import Flask, jsonify, request

app = Flask(__name__)

@app.route('/api/payments/', methods=['POST'])
def handle_payment():
    req_json = request.get_json()
    req_json['status'] = "200"
    print(req_json)
    return jsonify(req_json)

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=80, debug=True)
