#b=[[pow(j,i)%10 for i in xrange(1,5)]for j in xrange(1,21)]
b=[[0,0,0,0],[1, 1, 1, 1], [2, 4, 8, 6], [3, 9, 7, 1], [4, 6, 4, 6], [5, 5, 5, 5], [6, 6, 6, 6], [7, 9, 3, 1], [8, 4, 2, 6], [9, 1, 9, 1], [0, 0, 0, 0], [1, 1, 1, 1], [2, 4, 8, 6], [3, 9, 7, 1], [4, 6, 4, 6], [5, 5, 5, 5], [6, 6, 6, 6], [7, 9, 3, 1], [8, 4, 2, 6], [9, 1, 9, 1], [0, 0, 0, 0]]
t=input()
while t:
    m,n=[int(i) for(i)in raw_input().split(' ')]
    if n==0:
        print "1"
    else:
        q=n%4-1
        print b[m][q]
    t-=1      
    
