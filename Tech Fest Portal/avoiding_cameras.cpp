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
node nd[100001],nd1[100001];
bool find(int n,int ele)
{
    if(n==1)
    {
        if(ele>=nd1[1].x&&ele<=nd1[1].y) return false;
        else return true;
    }
    if(n==2)
    {
        if((ele>=nd1[1].x&&ele<=nd1[1].y)||(ele>=nd1[2].x&&ele<=nd1[2].y)) return false;
        return true;
    }
    if(ele>=nd1[n].x)
    {
        if(ele>=nd1[n].x&&ele<=nd1[n].y) return false;
        else return true;
    }
    int low=1,high=n,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nd1[mid].x<=ele&&nd1[mid+1].x>ele)
        {
            if(nd1[mid].x==ele) return false;
            else
            {
                if(ele>=nd1[mid].x&&ele<=nd1[mid].y) return false;
                return true;
            }
        }
        else
        {
            if(nd1[mid].x<=ele) low=mid+1;
            else high=mid-1;
        }
    }
    return true;
}

int pos[100001];
int main()
{
    int n,k,i,posi,res=0;
    bool a;
    scanint(n);
    scanint(k);
    for(i=1;i<=n;i++) scanint(pos[i]);
    for(i=1;i<=k;i++)
    {
        scanint(nd[i].x);
        scanint(nd[i].y);
    }
    sort(nd+1,nd+1+k);

    posi=1;
    nd1[1].x=nd[1].x;
    nd1[1].y=nd[1].y;
    for(i=2;i<=k;i++)
    {
        if(nd1[posi].y<nd[i].x)
        {
            nd1[++posi].x=nd[i].x;
            nd1[posi].y=nd[i].y;
        }
        else
        {
            nd1[posi].y=max(nd1[posi].y,nd[i].y);
        }
    }
    for(i=1;i<=n;i++)
    {
        a=find(posi,pos[i]);
        if(a) res++;
    }
    res=n-res;
    out(res);
    return 0;
}


