#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int p,s,T;
    double b,v,d;
    cin>>T;
    while(T>0)
    {
        cin>>p>>s;
        d=p*p-24*s;
        if(d>=0)
        {
           b=(p-sqrt(d))/12.0;
           v=b*b*(p/4.0-2.0*b);
        }
        else
            v=0;
        printf("%.2Lf\n",v);
        T--;

    return 0;
}
