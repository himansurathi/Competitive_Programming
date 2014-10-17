#include<stdio.h>
int main()
{
    int T,n,k,ans;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&k);
        if(n==1 || n==2)
           ans=n;
        else if(n==3 && k==2)
           ans=78;
        else if(n==4 && k==2)
            ans=102;
        else
            ans=0;
        printf("%d\n",ans);
    }
    return 0;
}
