#include<stdio.h>
#include<limits.h>
int main()
{
    static int  arr[10002],T,c,min,n,i;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        c=0;
        i=0;
        min=INT_MAX;
        while(i<n)
        {
            scanf("%d",&arr[i]);
            if(arr[i]<=min)
            {
                c++;
                min=arr[i];
            }
            i++;
        }
        printf("%d\n",c);
    }
  return 0;
}
