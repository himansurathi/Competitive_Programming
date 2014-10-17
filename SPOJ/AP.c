#include<stdio.h>
int main()
{
    int T;
    long long int sum,third,third_last,n,d,a,i;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld%lld%lld",&third,&third_last,&sum);
        n=sum*2/(third+third_last);
        printf("%lld\n",n);
        d=(third_last-third)/(n-5);
        a=third-2*d;
        for(i=0;i<n;i++)
            printf("%lld ",(a+i*d));
        printf("\n");
    }
    return 0;
}
