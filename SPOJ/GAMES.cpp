#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<string.h>
using namespace std;
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
string s,v;
int p,T,q,m,w;
cin>>T;
while(T--)
{
  cin>>s;
  q=s.find('.');
  if(s=="0")
    p=0;
  else if(q!=-1)
  {
    v=s.substr(q+1,s.length()-q-1);
    m=v.length();
    v=s.substr(0,q)+v;
    q=atoi(v.c_str());
    w=pow(10.0,m);
    p=w/gcd(q,w);
  }
 else
    p=1;
  cout<<p<<endl;
}
return 0;
}
