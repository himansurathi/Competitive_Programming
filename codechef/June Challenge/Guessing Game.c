#include<stdio.h>
int main()
{
    int t;
    long long int n,m,a,b,p;
    scanf("%d",&t);
    while(t)
    {
        scanf("%lld%lld",&n,&m);
        if(m%2!=0 && n%2!=0)
         {
            a=(n*m/2);
            b=(n)*(m);
            printf("%lld/%lld\n",a,b);
         }
        else
            printf("1/2\n");
        t--;
    }
    return 0;
}
