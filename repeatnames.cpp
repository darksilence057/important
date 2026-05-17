repeatnames...
>>app.yaml :
runtime: python311
entrypoint: gunicorn -b :$PORT main:app

>>main.py:
from flask import Flask

app = Flask(__name__)

@app.route('/')
def hello():
    output = ""

    for i in range(5):
        output += "Name: Kishan Raj<br>"
        output += "Seat No: ABC123<br>"
        output += "Department: Computer Engineering<br><br>"

    return output

if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8080, debug=True)

>>requirements.txt:
Flask==2.3.2
gunicorn==21.2.0

In terminal>>pip install -r requirements.txt
>>python main.py