#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,c,n,i,tot,*arr;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&n,&c);
        tot=0;
        arr=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
        {
          scanf("%d",&arr[i]);
          tot+=arr[i];
        }
        if(c>=tot)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
