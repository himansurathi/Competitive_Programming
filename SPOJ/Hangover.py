s=0
b=[0]*278
for i in xrange(2,278):
    s=b[i-1]
    b[i]=s+1.0/i
n=input()
while n:
    c=-1
    for i in b:
        if n>i:
            c+=1
        else:
            break
    print c,
    print "card(s)"
    n=input()
