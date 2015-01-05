import os

pid = os.fork()

if pid == 0:
    print "I am a child"
elif pid > 0:
    print "I am a parent"
else:
    print "error"

