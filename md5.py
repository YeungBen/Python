import hashlib

data =  'This a md5 test!'

hash_md5 = hashlib.md5(data)

print hash_md5.hexdigest()
print hashlib.sha1('This is a sha1 test !').hexdigest()

