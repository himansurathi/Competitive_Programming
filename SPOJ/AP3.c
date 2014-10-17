#include<stdio.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int third,fourth_last,T;
    long double disc,w,s,n,x,a,d,i;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&third,&fourth_last,&s);
        printf("%d %d %d\n",third,fourth_last,s);
        w=5.00*fourth_last+7.00*third+2.00*s;
        printf("%Lf\n",w);
        x=fourth_last+third;
        disc=(powl(w,2))/(4.0*x*x)-(12.0*s/x);
        n=w/(2*x)+sqrtl(disc);
        printf("%Lf %Lf %d\n",w,disc,n);
        d=(fourth_last-third)/(n-6);
        a=third-2*d;
        for(i=0;i<n;i++)
          printf("%d ",a+i*d);
        printf("\n");
    }
}
