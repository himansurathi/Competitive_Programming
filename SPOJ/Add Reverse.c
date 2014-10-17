#include<stdio.h>
int addrev(int m)
{
  int r=0;
  while(m!=0)
  {
      r=r*10+m%10;
      m/=10;
  }
  return r;
}
int main()
{
    int p,T,q;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d%d",&p,&q);
    int j=addrev(p)+addrev(q);
    j=addrev(j);
    printf("%d\n",j);
    }
    return 0;
}
