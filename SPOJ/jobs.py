m=raw_input()
n,k=[float(i) for(i)in m.split(' ')]
if k>n:
    print 2*n-1
else:
    print "%.0d"%(n/k*(n+k-1))

