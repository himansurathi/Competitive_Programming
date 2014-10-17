#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
using namespace std;
int substring(string p,int s,int e)
{
  char q[12];
  int i,k=0;
  for(i=s;i<e;i++)
    if(p!=" ")
       q[k++]=p[i];
  q[k]='\0';
  return(atoi(q));
}
int main()
{
int n,i,p,d1,d2,q,r;
string s;
scanf("%d",&n);
while(n)
{
fflush(stdin);
getline(cin,s);
if(s=="")
    continue;
p=s.find("m");
q=s.find("+");
r=s.find("=");
if(p<q)
{
    d1=substring(s,q+1,r);
    d2=substring(s,r+1,s.length());
    cout<<(d2-d1)<<" + "<<d1<<" = "<<d2<<endl;
}
else if(p>q && p<r)
{
    d1=substring(s,0,q);
    d2=substring(s,r+1,s.length());
    cout<<d1<<" + "<<(d2-d1)<<" = "<<d2<<endl;
}
else if(p>r)
{
    d1=substring(s,0,q);
    d2=substring(s,q+1,r);
    cout<<d1<<" + "<<d2<<" = "<<(d1+d2)<<endl;
}
n--;
}
return 0;
}
