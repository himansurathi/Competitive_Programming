#include<stdio.h>
int main()
{
    int t,num,s,n,m,i;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d%d",&n,&m);
      s=0;
      for(i=0;i<n;i++)
        {
          scanf("%d",&num);
          s+=num;
        }
      if(n==1 || ((s+m)%n==0))
        printf("Yes\n");
      else
        printf("No\n");
    }
    return 0;
}
