#include<stdio.h>
int main()
{
    long long int arr[100002],i,mid,x,y,k,flag;
    int n,q,j;
    scanf("%d%d",&n,&q);
    for(i=0;i<n;i++)
       scanf("%lld",&arr[i]);
    for(j=0;j<q;j++)
     {
        scanf("%lld",&k);
        x=0;
        y=n-1;
        flag=0;
        while(x<=y)
        {
        mid=(x+y)/2;
        if(k==arr[mid])
           {
             flag=1;
             for(i=mid-1;i>=0;i--)
             {
                 if(arr[i]==k)
                    mid=i;
                 else
                    break;
             }
             break;
           }
        else if(k>arr[mid])
            x=mid+1;
        else if(k<arr[mid])
            y=mid-1;
        }
       if(flag==0)
        printf("-1\n");
       else
        printf("%lld\n",mid);
    }
   return 0;
}
