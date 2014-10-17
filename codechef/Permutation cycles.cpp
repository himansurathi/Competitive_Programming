#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   int n,p,k,count=0;
   cin>>n;
   int index[n+1],arr[n+1],out[3*(n+1)],w=0;
   for(int i=0;i<n;i++)
    index[i]=0;
   for(int i=0;i<n;i++)
     cin>>arr[i];
   for(p=0;p<n;p++)
   {
      if(index[p]!=1)
      {
        count++;
        out[w++]=(p+1);
        k=p;
        while(arr[k]!=(p+1))
         {
          out[w++]=arr[k];
          index[arr[k]-1]=1;
          k=arr[k]-1;
         }
       out[w++]=arr[k];
       out[w++]=0;
       index[arr[k]-1]=1;
     }
  }
  k=0;
  cout<<count<<endl;
  while(k<w)
  {
      if (out[k] == 0)
          cout<<endl;
      else
          cout<<out[k]<<" ";
      k++;
   }
  return 0;
  }
