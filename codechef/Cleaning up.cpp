#include<iostream>
using namespace std;
void print(int,int*);
int main()
{
int t,index,*arr,m,n;
cin>>t;
while(t--)
{
    cin>>m>>n;
    arr=new int[m];
    for(int i=0;i<m;i++)
        arr[i]=0;
    for(int i=0;i<n;i++)
    {
        cin>>index;
        arr[index-1]=1;
    }
   print(m,arr);
}
return 0;
}
void print(int s,int *arr)
{
  int k=0;
  for(int i=0;i<s;i++)
    if(!arr[i])
     {
        if(k%2==0)
          {
            cout<<(i+1)<<" ";
            arr[i]=1;
          }
        k++;
     }
    cout<<endl;
    for(int i=0;i<s;i++)
    if(!arr[i])
       cout<<(i+1)<<" ";
    cout<<endl;
}
