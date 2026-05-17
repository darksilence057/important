everything same
>> main.py:

from flask import Flask

app = Flask(__name__)

@app.route('/')
def table():

    number = 10
    output = ""

    for i in range(1, 11):
        result = number * i
        output += f"{number} x {i} = {result} <br>"

    return output

if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8080, debug=True)