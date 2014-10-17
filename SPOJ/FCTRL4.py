arr=[1,1,2,6,4,2]
while 1:
    n=raw_input()
    if n=="":
        break
    while n>5:
        if n<=5:
            print arr[n]
        else:
            if int(n[-2])%2==0:
                res*=6
            else:
                res*=4
                
