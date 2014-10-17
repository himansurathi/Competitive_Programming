def digi(n):
    w=0
    while n!=0:
        w+=(n%10)**2
        n/=10
    return w
p=input()
q=0
if p==1:
    print "%d"%(0)
elif p==7:
    print "%d"%(p)
else:
    while p>9:
        p=digi(p)
        #print p
        q+=1
        if p==1:
            print q
if p!=1 and p!=7:
    print "%d"%(-1)
