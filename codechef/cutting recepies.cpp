#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
  int T,i,j,hcf,min,n;
  cin>>T;
  while(T--)
  {
      cin>>n;
      int arr[n];
      min=INT_MAX;
      hcf=1;
      for(i=0;i<n;i++)
       {
          cin>>arr[i];
          if(arr[i]<min)
            min=arr[i];
       }
      for(j=2;j<=min;j++)
      {
         for(i=0;i<n;i++)
           if(arr[i]%j!=0)
              break;
          if(i==n)
            hcf=j;
      }
      for(i=0;i<n;i++)
          cout<<(arr[i]/hcf)<<" ";
      cout<<endl;
   }
   return 0;
}
