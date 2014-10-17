#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;
int decimal(string m)
{
int t=0,k=0;
  for(int i=m.length()-1;i>=0;i--,k++)
      t+=(m[i]-48)*pow(2,k);
  return t;
}
int main()
{
    int n,p,q;
    string s,j,m,arr[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&p);
        s="";
        while(p!=0)
        {
            q=p%2;
            s=char(q+48)+s;
            p=p/2;
        }
        j=s.substr(s.length()-5,s.length()-1);
        cout<<decimal(j);
        j=s.substr(s.length()-9,4);
        cout<<" "<<arr[decimal(j)-1];
        j=s.substr(0,s.length()-9);
        cout<<" "<<decimal(j)<<endl;

        }
    return 0;
}
