a=[192,442,692,942]
T=input();
while T:
    n=long(input())
    print (n-1)/4*1000+a[(n-1)%4]
    T=T-1
