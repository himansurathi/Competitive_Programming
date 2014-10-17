#include<iostream>
using namespace std;
int main()
{
    int n,t,j,k,i,r;
    char m[201][21];
    string s;
    cin>>n;
    while(n)
    {
        cin>>s;
        k=t=0;
        for(i=0;i<s.length();i++)
        {
            m[k][t]=s[i];
            if(k%2==0)
            t++;
            else
            t--;
           //cout<<k<<" "<<t<<endl;
           if(t==n && k%2==0)
            {
                k++;
                t=n-1;
            }
            if(t==-1 && k%2!=0)
            {
                k++;
                t=0;
            }
         }
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                cout<<m[j][i];
            }
        }
        cout<<endl;
        cin>>n;
    }
    return 0;
}
