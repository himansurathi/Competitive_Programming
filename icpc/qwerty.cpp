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


int main()
{
    char str[20001];
    //freopen("tst.c","r",stdin);
    ll count;
    register int i,j,len,m,s,q,temp,prev;int num[20001];
   scanf("%s",&str);
   len=strlen(str);
   for(i=0;i<len;i++) num[i]=str[i]-'0';
   scanint(q);
   while(q--)
   {
       count=0;
       scanint(m);
       scanint(s);
      if(m==1&&s==0)
       {
           count=len;
           count*=len+1;
           count/=2;
           outll(count);
       }
       else
       {
           for(i=0;i<len;i++)
        {
           prev=(num[i])%m;
           if(prev==s) count++;
           for(j=i+1;j<len;j++)
           {
                temp=(prev*10+num[j])%m;
                if(temp==s) count++;
                prev=temp;
           }
        }
       outll(count);
        }
          }
return 0;
    }



