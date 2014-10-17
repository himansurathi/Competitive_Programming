#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int T,p,q,k;
    string str="zyxwvutsrqponmlkjihgfedcba";
    cin>>T;
    while(T--)
    {
        cin>>k;
        p=k%25;
        q=k/25;
        if(p!=0)
        {
            for(int i=str.length()-p-1;i<str.length();i++)
                cout<<str[i];
        }
        while(q--)
          cout<<str;
        cout<<endl;
    }
    return 0;
}
