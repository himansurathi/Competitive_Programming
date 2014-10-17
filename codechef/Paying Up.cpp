#include<iostream>
using namespace std;
static int b[1100000],a[20];
int main()
{
    int f,t,flag,n,m,top,i,j;
    cin>>t;
    while(t--)
     {
        cin>>n>>m;
        for(i=0;i<n;i++)
            cin>>a[i];
        b[0]=0;
        top=0;
        flag=0;
        f=0;
        if(m==0)
            cout<<"Yes"<<endl;
        else
        {
        for(i=0;i<n;i++)
        {
            for(j=0;j<=flag;j++)
            {
                top++;
                b[top]=a[i]+b[j];
                if(b[top]==m)
                {
                    f=1;
                    break;
                }
            }
            flag=top;
          if(f==1)
          {
           cout<<"Yes"<<endl;
           break;
          }
       }
     if(!f)
     cout<<"No"<<endl;
   }
}
    return 0;
}
