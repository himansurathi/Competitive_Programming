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
int mat[1000002];
int bsearch(int *arr,int y,int k)
{
    int x=1,mid;
    while(x<=y)
        {
        mid=(x+y)/2;
        if(k==arr[mid])
           {
             return mid;
           }
        else if(k>arr[mid])
            x=mid+1;
        else if(k<arr[mid])
            y=mid-1;
        }
        return 0;
}
int main()
{
    int t,n,m,i,j,k,ar[1001],w;
    ll count,temp,temp1;
    scanint(t);
    while(t--)
    {
        memset(mat,0,sizeof(mat));
        count=0;
        scanint(n);
        scanint(m);
        for(i=1;i<=n;i++) scanint(ar[i]);
        sort(ar+1,ar+1+n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
              w=bsearch(ar,n,m-ar[i]-ar[j]);
              if(w!=0)
                {
                 printf("%d %d %d\n",ar[i],ar[j],ar[w]);
                 count++;
                }
            }
        }
        outll(count);
    }
return 0;
}

/*temp=ar[i]+ar[j]+ar[k];
                if(temp<=m)
                {
                    temp1=(ar[i]*ar[i]*ar[i])+(ar[j]*ar[j]*ar[j])+(ar[k]*ar[k]*ar[k]);
                    if(mat[temp1]!=1)
                    {
                        count++;
                        mat[temp1]=1;
                    }
                }*/


