#include<iostream>
using namespace std;
int main()
{
    int T,n,max,p,num;
    cin>>T;
    while(T--){
        cin>>n;
        int *f=new int[10000];
        for(int i=0;i<10000;i++)
          f[i]=0;
        max=0;
        p=10000;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            f[num-1]++;
            if(f[num-1]>max)
            {
                p=num;
                max=f[num-1];
            }
            else if(max==f[num-1])
            {
                if(num<p)
                  p=num;
            }
        }
        cout<<p<<" "<<max<<endl;
    }
    return 0;
}
