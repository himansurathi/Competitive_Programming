#include<stdio.h>
int main()
{
int a,b,i,min,q,flag,t;
scanf("%d%d",&a,&b);
while(a!=0|| b!=0)
{
    t=0;
    flag=0;
    min=10000;
    for(i=0;i<a;i++)
    {
        scanf("%d",&q);
        if(q<min)
           min=q;
    }
    for(i=0;i<b;i++)
      {
         scanf("%d",&q);
         if(q<=min)
           t++;
      }
    if(t<2)
        printf("Y\n");
    else
        printf("N\n");
    scanf("%d%d",&a,&b);
}
return 0;
}
