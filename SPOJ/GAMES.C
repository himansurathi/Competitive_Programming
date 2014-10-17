#include<stdio.h>
#include<math.h>
int main()
{
float n;
long long int m;
int p,T;
scanf("%d",&T);
while(T--)
{
  scanf("%lf",&n);
  printf("%lf\n",n);
  m=llrintl(n);
  p=(int)(1.0/(n-m));
  printf("%d\n",&p);
}
return 0;
}
