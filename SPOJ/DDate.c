#include<iostream>
int mian()
{
    int n,p;
    string s;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",p);
        s="";
        while(p!=0)
        {
            q=p%2;
            s+=char(q);
            p=p/2;
        }
        cout<<s;
    }
    return 0;
}
