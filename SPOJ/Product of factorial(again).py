T=input()
while T:
    p1,n1=raw_input().split(' ')
    #print p1
    #print n1
    p=long(p1)
    n=long(n1)
    #print p
    #print n
    if p>n:
        c=0
    else:
        r=1
        m=0
        k=0
        q=n/p
        for i in xrange(0,q):
            c=r+k*(p-1)
            k=k+1
            m=m+k*(p-1)
            r=r+m
        print c
    T=T-1
