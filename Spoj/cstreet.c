#include<stdio.h>
#include<limits.h>
static int tot=0;
int arr[1001][1001];
void prim(int vertex[1001],int n)
{
    int i,j,min=INT_MAX,pos=1;
for(i=1;i<=n;i++)
{
    if(!vertex[i])
        break;
}
if(i==(n+1))
    return;
else
{
for(i=1;i<=n;i++)
{
    if(vertex[i])
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i][j] < min && arr[i][j] && !vertex[j])
            {
              min=arr[i][j];
              pos=j;
            }
        }
    }
}
vertex[pos]=1;
tot+=min;
prim(vertex,n);
}
}
int main()
{
    int t,p,n,m,ans,i,j,v[1001],a,b,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&p);
        scanf("%d",&n);
        scanf("%d",&m);
        for(i=1;i<=n;i++)
        {
           for(j=1;j<=n;j++)
             arr[i][j]=0;
        }
        for(i=0;i<m;i++)
        {
            scanf("%d%d%d",&a,&b,&l);
            arr[a][b]=l;
            arr[b][a]=l;
        }
        for(i=2;i<=n;i++)
          v[i]=0;
        v[1]=1;
        prim(v,n);
        ans=tot*p;
        printf("%d\n",ans);
    }
    return 0;
}
/*    int i,mstSet[n],parent[n],j,choose,tot=0,key[n],flag,min;
    for(i=1;i<=n;i++)
        {
          mstSet[i]=0;
          key[i]=INT_MAX;
        }
    mstSet[1]=1;
    p=1;
    key[1]=0;
    parent[1]=-1;
    tot=0;
    while(p!=n)
    {
       min=INT_MAX;
       for(i=1;i<=n;i++)
       {
           if(key[i]<min && mstSet[i]==0)
               choose=i;
       }
       mstSet[choose]=1;
       printf("cho %d\n",choose);
       p++;
        for(i=1;i<=n;i++)
        {
            if(arr[choose][i]<key[i] && arr[choose][i]!=0 && mstSet[i]==0)
                {
                  key[i]=arr[choose][i];
                  parent[i]=choose;
                }
        }
        tot+=arr[choose][parent[choose]];
    }*/
