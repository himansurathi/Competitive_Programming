#include<iostream>
using namespace std;
int main()
{
int T,p,c,i;
cin>>T;
int arr[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
while(T--)
{
  cin>>p;
  c=0;
  while(p!=0)
  {
    for(i=0;i<12;i++)
      if(arr[i]>p)
          break;
    p=p-arr[i-1];
    c++;
  }
   cout<<c<<endl;
}
return 0;
}
