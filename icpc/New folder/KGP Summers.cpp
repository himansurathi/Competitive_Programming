#include<bits/stdc++.h>
#define ll long long
#define l long

#define ins(s) scanf("%s",s)
#define in(s) scanf("%d",&s)
#define inc(s) scanf("%c",&s)
#define inl(s) scanf("%ld",&s)
#define inll(s) scanf("%lld",&s)
#define outs(s) printf("%s\n",s)
#define out(s) printf("%d\n",s)
#define outc(s) printf("%c\n",s)
#define outl(s) printf("%ld\n",s)
#define outll(s) printf("%lld\n",s)
#define lp(i,a,n)  for(i=a;i<n;i++)
#define mal(n) (int *)malloc(sizeof(int )*n)
#define gc getchar
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

class node
{
    public:
    int x,y;
    node(){x=0;y=0;}
    node(int a,int b)
    {
        x=a;y=b;
    }
    node &operator=(node a)
    {
        this->x=a.x;
        this->y=a.y;
        return *this;
    }
};
bool operator<(node a,node b)
{
    if(a.x<b.x) return true;
    else return false;
}
/*bool operator>(node a,node b)
{
    return (a.x>b.x);
}*/
bool operator==(node a,node b)
{
    return (a.x==b.x&&a.y==b.y);
}
node nd[2001];
int mat[2502][2502];
void bellman(int src,int n)
{
    queue<int> q;
    bool visit[2502];
    int w,i,parent[2502];
    unsigned long long int d,dist[2502];
    q.push(src);
    lp(i,1,n)
    {
        visit[i]=false;
        dist[i]=INT_MAX;
        parent[i]=-1;
    }
    dist[src]=0;
    visit[src]=true;
    parent[0]=0;
    while(!q.empty())
    {
        w=q.front();
      //  visit[w]=false;
        q.pop();
        for(i=0;i<n;i++)
        {
            d=mat[w][i]+dist[w];
            if(d<dist[i])
             {
                dist[i]=d;
                parent[i]=w;
                printf("%d is parent of %d and distance is %d\n",w,i,dist[i]);
             }
             if(visit[i]==false)
                {
                  q.push(i);
                  visit[i]=true;
                }
        }
    }
  //  printf("Distance min \n ");
/*    for(i=0;i<n;i++)
        printf("%d %d %d\n",i,dist[i],parent[i]);*/
    printf("%d\n",dist[n-1]);
}
int main()
{
    int t,n,i,j,a[2508],d,b[2508];
//    freopen("input.txt","r",stdin);
scanint(t);
while(t--)
{
    scanint(n);
    lp(i,1,n+1)
     {
         scanint(a[i]);
         scanint(b[i]);
     }
     scanint(a[0]);
     scanint(b[0]);
     scanint(a[i]);
     scanint(b[i]);
     lp(i,0,n+2)
     {
         for(j=i;j<n+2;j++)
         {
            d=(a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]);
            mat[i][j]=d;
            mat[j][i]=d;
         }
     }
/*     for(i=0;i<n+2;i++)
     {
         for(j=0;j<n+2;j++)
            printf("%d ",mat[i][j]);
         printf("\n");
     }*/
     bellman(0,n+2);
}
return 0;
}



