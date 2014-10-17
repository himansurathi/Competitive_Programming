#include<stdio.h>
int main()
{
    int n,k,i,j,d,min,min_d,arr[100000];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
if(n<=30)
{
for(i=0;i<n;i++)
{
    for(j=0;j<n && j!=i;j++)
    {
        d=arr[i]-arr[j];
        if((arr[i]-d*i)<min)
        {
            min_d=d;
            min=arr[i]-d*i;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d ",min+i*min_d);
}
}
return 0;
}
