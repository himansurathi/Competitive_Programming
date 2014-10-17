#include<stdio.h>
int main()
{
    int n,s,max,m,i,t,arr[10002];
    scanf("%d",&n);
    while(n!=-1)
    {
        s=0;
        t=0;
        max=-1;
        for(i=0;i<n;i++)
        {
          scanf("%d",&arr[i]);
          s+=arr[i];
          if(arr[i]>max)
            max=arr[i];
        }
        if(s%n==0)
        {
          for(i=0;i<n;i++)
          {
              if(arr[i]>(s/n))
                t+=(arr[i]-s/n);
          }
          printf("%d\n",t);
        }
        else
        printf("-1\n");
        scanf("%d",&n);
    }
    return 0;
}
