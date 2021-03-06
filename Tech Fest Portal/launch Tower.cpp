//Template

// By Anudeep :)
//Includes
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <utility> //Pair
#include <algorithm>
#include <sstream> // istringstream>> ostring stream<<
#include <iostream>
#include <iomanip>
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#include <cstdio>
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <limits>
using namespace std;

//M lazy ;)
typedef long long ll;
typedef vector <int> vi;
typedef pair< int ,int > pii;
typedef istringstream iss;
typedef ostringstream oss;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define ln length()
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(int i=a;i<=n;i++)
#define fd(i,n,a) for(int i=n;i>=a;i--)
#define all(a)  a.begin(),a.end()
#define ESP (1e-9)

#define gi(n) scanf("%d",&n)
#define gl(n) cin >> n
#define pi(n) printf("%d",n)
#define pl(n) cout << n
#define ps printf(" ")
#define pn printf("\n")
#define dg(n,s); printf("%s %d",s,n)
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()

void assertOO(int a, int n, int b) {
	assert( a <= n && n <= b );
}
int dp[20000][500];
int main()
{
    string s;
    int q,m,l,r,sum,i,j;
    cin>>s;
    gi(q);
    while(q--)
    {
        gi(m);
        gi(l);
  		memset(dp, 0, sizeof(dp));
  		dp[(s[0]-'0')%m][0]=1;
  		sum=dp[l][0];
        for(i=1;i<s.ln;i++)
        {
          for(j=0;j<m;j++)
          {
              if(dp[j][i-1]>=1)
              {
                  r=(10*j+s[i]-'0')%m;
                  dp[r][i]+=(dp[j][i-1]);
              }
           }
           dp[(s[i]-'0')%m][i]+=1;
           sum+=dp[l][i];
         }
         /*for(i=0;i<m;i++)
         {
            for(j=0;j<s.ln;j++)
                printf("%d ",dp[i][j]);
            printf("\n");
         }*/
         printf("%d\n",sum);
    }
    return 0;
}
