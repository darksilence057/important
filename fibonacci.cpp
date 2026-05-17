>> main.py:

from flask import Flask

app = Flask(__name__)

@app.route('/')
def fibonacci():

    n1 = 0
    n2 = 1

    output = f"{n1} <br>{n2} <br>"

    for i in range(8):

        n3 = n1 + n2

        output += f"{n3} <br>"

        n1 = n2
        n2 = n3

    return output

if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8080, debug=True)