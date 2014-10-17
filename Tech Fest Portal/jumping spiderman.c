#include<stdio.h>
#include<limits.h>
#define min(a,b) (a<=b?a:b)
int main()
{
    int n,j,cost[200001]={0},a,arr[200001],i,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    cost[1]=0;
    for(i=2;i<=n;i++)
    {
        a=INT_MAX;
        for(j=1;(i-j)>=1;j*=2)
          {
              p=abs(arr[i-j]-arr[i]);
              a=min(a,cost[i-j]+p);
          }
          cost[i]=a;
          //printf("i=%d cost=%d\n",i,cost[i]);
    }
    printf("%d\n",cost[n]);
return 0;
}
