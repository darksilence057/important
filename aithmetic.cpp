>>app.yaml:
runtime: python311

entrypoint: gunicorn -b :$PORT main:app

>> requirements.txt:
Flask==2.3.2
gunicorn==21.2.0

>>main.py:
from flask import Flask

app = Flask(__name__)

@app.route('/')
def calculate():

    num1 = 20
    num2 = 10

    addition = num1 + num2
    subtraction = num1 - num2
    multiplication = num1 * num2
    division = num1 / num2

    output = f"""
    First Number = {num1} <br><br>
    Second Number = {num2} <br><br>

    Addition = {addition} <br><br>
    Subtraction = {subtraction} <br><br>
    Multiplication = {multiplication} <br><br>
    Division = {division}
    """

    return output

if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8080, debug=True)
>>pip install -r requiremnets.txt
>>pyhton main.py