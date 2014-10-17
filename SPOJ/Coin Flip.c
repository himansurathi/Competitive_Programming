#include<stdio.h>
int main()
{
    int T,G,i,n,q;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&G);
        while(G--)
        {
            scanf("%d%d%d",&i,&n,&q);
            if(i==q && n%2!=0)
                printf("%d\n",(n-1)/2);
            else if(i!=q && n%2!=0)
                printf("%d\n",(n+1)/2);
            else
                printf("%d\n",(n/2));
        }
    }
    return 0;
}
