from bottle import route,run,template

@route("/login")
def login():
    return 'successful!';
@route('/hello/:name')
def index(name='World'):
    return '<b>Hello %s!</b>' % name

run()
