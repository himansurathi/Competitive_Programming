# include <iostream>
# include <fstream>
# include <sstream>
# include <algorithm>
# include <cstdio>
# include <cmath>
# include <numeric>
# include <cstdlib>
# include <cstring>
# include <vector>
# include <list>
# include <set>
# include <map>
# include <stack>
# include <queue>
# include <cctype>
# include <climits>
# include <complex>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define inf 1000000000
#define pi (double)(3.141592653589793)

int a[2502],b[2502],d[2502],c[2502];
int main()
{
   // priority_queue<pair<int,int>,vector<pair<int,int> >, greater<int,int> > pq;
   	freopen("input.txt","r",stdin);
   int i,j,k,n,p,t,x0,y0,x1,y1;
   cin>>t;
   while(t--)
   {
       memset(a,0,sizeof(a));
       memset(b,0,sizeof(b));
       memset(d,0,sizeof(d));
       memset(c,0,sizeof(c));
       cin>>n;
       rep(i,0,n)
       {
           cin>>a[i]>>b[i];

       }
       cin>>x0>>y0>>x1>>y1;
       a[n]=x1,b[n]=y1;
       	//cout<<a[n]<<endl<<b[n]<<"hi"<<endl;
       int mini=100000000;
       rep(i,0,n+1)
       {
           d[i]=(x0-a[i])*(x0-a[i])+(y0-b[i])*(y0-b[i]);
           //cout<<d[i]<<endl<<i<<endl;

       }


       int sum=mini;
       //cout<<mini<<endl<<k;
       int z=0,y=k;
      while(z<=n)
       {

           mxini=100000000;

           rep(j,0,n+1)
           {

               if( c[j]==0)
               {
                   if(mini>d[j])
                   {
                       y=j;
                       mini=d[j];
                   }
               }

           }
      c[y]=1;
           z++;
      		rep(i,0,n+1)
      		{
      			int temp=d[y]+(a[y]-a[i])*(a[y]-a[i])+(b[y]-b[i])*(b[y]-b[i]);
      			//cout<<temp<<i<<endl;
      			if(temp<d[i])
      			{
      				d[i]=temp;
      			//	cout<<d[i]<<endl;
      			}
      		}




       }
       cout<<d[n]<<endl;

   }
    return 0;
}
