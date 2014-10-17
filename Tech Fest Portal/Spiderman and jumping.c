#include<stdio.h>
#include<math.h>
int main()
{
    int v,i,j,k,l;
    scanf("%d",&v);
    int arr[v],adj[15][15]={0};
    for(i=1;i<=v;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1,k=1;i<=v;i=(int)pow(2,k),k++)
    {
        for(j=i+1,l=1;j<=v;j=(int)pow(2,l)+i,l++)
           {
             adj[k][l+k]=arr[j]-arr[i];
             adj[l+k][k]=arr[j]-arr[i];
           }
    }
    for(i=1;i<k;i++)
    {
        for(j=1;j<k;j++)
            printf("%d ",adj[i][j]);
        printf("\n");
    }
   return 0;
}
