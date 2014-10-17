#include<stdio.h>
int main()
{
    int t,n,i,arr[100000],p[10],len,maxlen;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<=9;i++)
            p[i]=-1;
        maxlen=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(p[arr[i]]==-1)
                p[arr[i]]=i;
            else
            {
                len=i-p[arr[i]]+1;
                if(len>maxlen)
                   maxlen=len;
            }
        }
        printf("%d\n",maxlen);
    }
    return 0;
}
