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
void bellman(int mat[][2502],int src,int n)
{
    queue<int> q;
    bool visit[2502];
    unsigned long long int d;
    q.push(src);
    lp(i,1,n+2)
    {
        visit[i]=false;
        dist[i]=INT_MAX;
    }
    dist[src]=0;
    visit[src]=true;
    while(!q.empty())
    {
        w=q.front();
        q.pop();
        for(i=0;i<n+2;i++)
        {
            d=mat[w][i]+dist[w];
            if(!visit[i])
                {
                  q.push(i);
                  visit[i]=true;
                }
            if(d<dist[i])
                dist[i]=d;
        }
    }
    printf("%d\n",dist[n+1]);
}
int main()
{
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
         for(j=i;j<n+2,j++)
         {
            d=(a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]);
            mat[i][j]=d;
            mat[j][i]=d;
         }
     }
     bellman(mat,0,n);
}
return 0;
}



