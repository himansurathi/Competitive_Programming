#include<stdio.h>
int arr[1000005];
int main()
{
    int T;
    register int i;
    int n,ans,pos;
    scanf("%d",&T);
    for(i=0;;i++)
    {
      arr[i]=i*(i+1)/2;
      if(arr[i]>1000000000)
        break;
    }
    while(T--)
    {
        scanf("%d",&n);
        for(i=0;;i++)
            if(arr[i+1]>n && arr[i]<=n)
            {
                ans=i;
                break;
            }
        printf("%d\n",ans);
    }
return 0;
}
