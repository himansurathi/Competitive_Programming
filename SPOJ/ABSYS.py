v=input()
i=1;
while i<=v:
    s=raw_input()
    if s=="":
        continue
    m=s.find("machula")
    p=s.find('=')
    q=s.find('+')
    if m<q:
        d2=int(s[q+1:p])
        d3=int(s[p+1:])
        print "%d + %d = %d"%((d3-d2),d2,d3)
    elif m>q and m<p:
        d1=int(s[:q])
        d3=int(s[p+1:])
        print "%d + %d = %d"%(d1,(d3-d1),d3)
    elif m>p:
        d1=int(s[:q])
        d2=int(s[q+1:p])
        print "%d + %d = %d"%(d1,d2,(d1+d2))
    i=i+1
