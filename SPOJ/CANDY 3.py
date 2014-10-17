T=input()
while(T):
    m=raw_input()
    n=input()
    s=0
    p=n
    while n:
        m=input()
        s+=m
        n=n-1
    if s%p==0:
        print "YES"
    else:
        print "NO"
    T=T-1
