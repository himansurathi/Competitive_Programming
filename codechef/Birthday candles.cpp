#include<iostream>
using namespace std;
int main()
{
    int T,c,arr[10],min,flag,i,p;
    cin>>T;
    while(T--)
    {
      min=9;
      p=0;
      flag=0;
      cin>>arr[0];
      for(i=1;i<10;i++)
        {
            cin>>arr[i];
            if(arr[i]==arr[0])
                flag=1;
            if(arr[i]<min)
            {
                p=i;
                min=arr[i];
            }
        }
      if(min==0)
       {
         if(p!=0)
           cout<<p<<endl;
         else
           {
             c=min;
             min=9;
             for(i=1;i<10;i++)
              {
                if(arr[i]<min)
                 {
                   p=i;
                   min=arr[i];
                 }
              }
             if(min!=0)
             {
              cout<<p<<c;
              min--;
              while(min--)
              cout<<p;
              cout<<endl;
             }
             else
                cout<<1<<endl;
           }
       }
      else
      {
         if(p==0 && flag==0)
         {
           cout<<(p+1);
           for(int i=0;i<=min;i++)
            cout<<p;
           cout<<endl;
         }
         else if(p==0 && flag==1)
         {
             c=min;
             min=9;
             for(i=1;i<10;i++)
              {
                if(arr[i]<=min)
                 {
                   p=i;
                   min=arr[i];
                 }
              }
            for(i=0;i<=min;i++)
                cout<<p;
            cout<<endl;
         }
         else if (flag==1)
         {
            for(i=0;i<=min;i++)
                cout<<1;
            cout<<endl;
         }
         else{
         for(int i=0;i<=min;i++)
           cout<<p;
         cout<<endl;
         }
         }
   }
   return 0;
}
