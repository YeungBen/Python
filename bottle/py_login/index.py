from bottle import route,run,template,request

@route("/login",method="post")

def login():

    username=request.forms.get("username");
    password=request.forms.get("password");

    print(username,password)
    if username=='admin' and password=='admin':
        return username+'  Go!';
    else:
        return username+'  Failed~_~';

@route("/index")
def index():

    return template("index")

run()
