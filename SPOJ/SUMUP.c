#include<stdio.h>
int main()
{
  int T;
  double p,n;
  scanf("%d",&T);
  while(T--)
  {
      scanf("%lf",&n);
      p=0.5*(1.0-1.0/(n*n+n+1.0));
      printf("%.5f\n",p);
  }
  return 0;
}
