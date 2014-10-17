#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
 int t,p,flag,T,q;
 string a;
 getline(cin,a);
 while(a.compare("*"))
  {
   flag=0;
   for(int i=0;i<a.length();i++)
    {
     if(a[i]!=' ')
     {
       q=i;
       break;
     }
    }
  p=a.find(" ",q);
  if(p==string::npos)
   {
      printf("Y\n");
      cin.clear();
      getline(cin,a);
      continue;
   }
 for(int i=p+1;p!=string::npos;i=p+1)
 {
     if((a[i]==a[q]) || ((a[i]-32)==a[q]) ||((a[i]+32)==a[q]))
        flag=1;
     else
     {
        printf("N\n");
        flag=0;
        break;
     }
     p=a.find(" ",p+1);
  }
  if(flag==1)
    printf("Y\n");
    cin.clear();
  getline(cin,a);
 }
  return 0;
}

