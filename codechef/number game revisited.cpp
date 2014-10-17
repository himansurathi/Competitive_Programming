#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool prime(int);
int main()
{
  int diff,T,p,n;
  bool v;
  cin>>T;
  while(T--)
  {
   scanf("%d",&n);
   if((n%4)==1)
    cout<<"ALICE\n";
   else
    cout<<"BOB\n";
  }
  return 0;
}
