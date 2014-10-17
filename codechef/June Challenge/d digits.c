#include<stdio.h>
#include<math.h>
long long int power(long long int x, long long int n)
{
    long long int y=1,t;
    while(1)
    {
         t=n%2;
         n=floor(n/2);
         if(t==1)
           y=y*x;
         if(n==0)
            break;
         x=x*x;
    }
    return y;
}
int main()
{
printf("%lld\n",power(2,3));
printf("%lld\n",power(1000000000,2));
}
