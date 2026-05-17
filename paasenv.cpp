from flask import Flask

app = Flask(__name__)

@app.route('/')
def home():
    return """
    <h1>Welcome to Cloud Computing Practical</h1>
    <h2>Web Application Successfully Deployed on PaaS</h2>
    """

if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8080, debug=True)

after that run gcloud init in cmd
select 1
gcloud app create
gcloud app deploy
but billing account is required not possible