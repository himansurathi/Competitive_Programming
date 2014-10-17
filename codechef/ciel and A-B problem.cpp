#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,d;
cin>>a>>b;
d=abs(a-b);
if((d%10)==9)
    d--;
else
    d++;
cout<<d;
}
