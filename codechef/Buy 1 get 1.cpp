#include<iostream>
using namespace std;
int main()
{
    static int T,arr[60],c,i;
    string s;
    cin>>T;
    while(T--)
    {
        cin>>s;
        c=0;
        for(i=0;i<60;i++)
            arr[i]=0;
        for(i=0;i<s.length();i++)
               arr[s[i]-65]++;
        for(i=0;i<60;i++)
            if(arr[i]!=0)
                c+=arr[i]/2+arr[i]%2;
        cout<<c<<endl;
    }
    return 0;
}
