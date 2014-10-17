def gcd(a,b):
    if b==0:
        return a;
    else:
        return gcd(b,a%b);

t=input()
while t:
    n=input()
    p=0
    for a in xrange(1,n+1):
        p+=(3*n-a)/2+1
    r=6*(n**3)
    m=gcd(p,r)
    v=str(p/m)+"/"+str(r/m)
    print v
    t-=1
