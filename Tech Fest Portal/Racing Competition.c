#include<stdio.h>
#define max(a,b) ( a>=b ? a: b )
#define min(a,b) ( a<=b ? a: b )
#define MOD 1000000007
long long int  modPow(long long int  a, long long int  x, long long int  p) {
    //calculates a^x mod p in logarithmic time.
    long long int  res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

long long int  modInverse(long long int  a, long long int  p) {
    //calculates the modular multiplicative of a mod m.
    //(assuming p is prime).
    return modPow(a, p-2, p);
}

long modBinomial(long long int n, long long int  k, long long int  p) {
// calculates C(n,k) mod p (assuming p is prime).

    long long int numerator = 1,i; // n * (n-1) * ... * (n-k+1)
    for (i=0; i<k; i++) {
        numerator = (numerator * (n-i) ) % p;
    }

    long denominator = 1; // k!
    for (i=1; i<=k; i++) {
        denominator = (denominator * i) % p;
    }

    // numerator / denominator mod p.
    return ( numerator* modInverse(denominator,p) ) % p;
}

int main()
{
    int n,r,s,c;
scanf("%d%d%d",&n,&r,&s);
int w=max(r,s);
c=(w>=n)? (modBinomial(r+s-1,min(r,s),MOD)): 0;
printf("%d\n",c);
return 0;
}

