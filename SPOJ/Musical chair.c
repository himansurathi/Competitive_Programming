#include<stdio.h>
int main()
{
    long long int n,k,r,i;
    scanf("%lld%lld",&n,&k);
    while(n!=0 && k!=0)
    {
      r=0,i=1;
      while(i<=n)
       {
         r=(r+k)%i;
         i+=1;
       }
        printf("%lld %lld %lld\n",n,k,(r+1));
        scanf("%lld%lld",&n,&k);
    }
    return 0;
}
