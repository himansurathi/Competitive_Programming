#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int T,n,i,p,min,arr[5001];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        qsort(arr,n,sizeof(int),cmpfunc);
        min=INT_MAX;
        for(i=1;i<n;i++)
        {
          p=arr[i]-arr[i-1];
          if(p<=min)
            min=p;
        }
        printf("%d\n",min);
    }
    return 0;
}
