>>main.py:

from flask import Flask

app = Flask(__name__)

@app.route('/')
def largest():

    num1 = 25
    num2 = 80
    num3 = 45

    if num1 >= num2 and num1 >= num3:
        largest_number = num1

    elif num2 >= num1 and num2 >= num3:
        largest_number = num2

    else:
        largest_number = num3

    output = f"""
    First Number = {num1} <br><br>
    Second Number = {num2} <br><br>
    Third Number = {num3} <br><br>

    Largest Number = {largest_number}
    """

    return output

if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8080, debug=True)