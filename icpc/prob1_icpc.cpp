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
int main()
{
    int t,n,ds,dt,d;
    float res;
   scanint(t);
   while(t--)
   {
       scanint(ds);
       scanint(dt);
       scanint(d);
       res=(d-ds-dt)*1.0;
       if(res>=0) printf("%.6f\n",res);
       else outs("0.000000");
   }
return 0;
}



