#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    double third,fourth_last;
    double disc,s,n1,n2,w,x;
    long long int n,a,d,i;
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf %lf %lf",&third,&fourth_last,&s);
        w=2.5*fourth_last+3.5*third+s;
        x=fourth_last+third;
        disc=powl(w,2)-(12.0*s*x);
        n1=(w+sqrtl(disc))/x;
        n2=(w-sqrtl(disc))/x;
        if(ceill(n1)==floorl(n1))
          n=llrintl(n1);
        else if(ceill(n2)==floor(n2))
          n=llrintl(n2);
        printf("%lld\n",n);
        d=llrintl((fourth_last-third)/(n-6));
        a=llrintl(third-2*d);
         for(i=0;i<n;i++)
          printf("%lld ",a+i*d);
        printf("\n");
    }
}
