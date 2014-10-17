#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    int r=1;
    while(r!=0)
    {
       r=a%b;
       a=b;
       b=r;
    }
    return a;
}
int main()
{
    int t;
    long long int n,p,res=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        res=n*(n-1);
        p=gcd(res,8);
        printf("%lld/%lld\n",res/p,8/p);
    }
    return 0;
}
