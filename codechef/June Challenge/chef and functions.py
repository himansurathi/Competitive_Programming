def findRoot1(k, n):
    u, s = n, n+1
    while u < s:
        s = u
        t = (k-1) * s + n #pow(s, k-1)
        u = t # k
    return s
print findRoot1(2,10**18)
