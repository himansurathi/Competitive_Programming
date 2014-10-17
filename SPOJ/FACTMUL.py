n=input()
m=109546051211
if n>=587117:
    t=0
else:
    t=1
    f=1
    for i in xrange(2,n+1):
        f=(f*i)%m
        t=(t*f)%m
print t
