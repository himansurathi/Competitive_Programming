#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
int subtract()
{
    for(i=b.length()-1;i>=0;i--)
    {
      a2[k]=b[i]-48;
      k++;
    }
    t=k;
    k=0;
    for(i=a.length()-1;i>=0;i--)
    {
        a1[k]=a[i]-48;
        if(k>=t)
            a2[k]=0;
        int diff=a1[k]-a2[k]-carry;
        if(diff<0)
        {
          diff+=10;
          carry=1;
        }
        else
        {
            carry=0;
        }
        a3[k]=diff;
        k++;
    }
    p="";
    for(int i=k-1;i>=0;i--)
    {
      if(a3[i]!=0)
        {
          flag=i;
          break;
        }
    }
    if(flag==-1)
      p='0';
    else
    {
        for(int i=flag;i>=0;i--)
            p+=a3[i]+48;
        //p+='\0';
    }
    cout<<p;

}
int main()
{
    string a ,b,p;
    int a1[100],i,t,a2[100],a3[100],diff=0,carry=0;
    int k=0,flag=-1;
    cin>>a>>b;
    return 0;
}
