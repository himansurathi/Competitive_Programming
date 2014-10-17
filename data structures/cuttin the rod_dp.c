/* Given a rod of length n units
and price of all pieces smaller than n
find the most beneficial way of cutting the rod */

#include<stdio.h>
int main()
{
    int t,i,n,j,max,p[1000],b[1000],tot;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&p[i]);
        b[0]=0;
        for(i=1;i<=n;i++)
        {
            max=-1;
            for(j=1;j<=i;j++)
            {
                tot=p[j]+b[i-j];
                if(tot>max)
                    max=tot;
            }
            b[i]=max;
        }
        for(i=1;i<=n;i++)
        {
            printf("Length %d of rod gives max %d cutting of rod\n",i,b[i]);
        }
    }
    return 0;
}
