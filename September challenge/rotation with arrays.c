#include<stdio.h>
int mod(int a,int b)
{
    if(a<b &&a>=0)
        return a;
    if(a>=b)
        return (a%b);
    else
        return(b+a);
}
int main()
{
    int n,m,g,i,d=0,k,arr[100000];
    char p;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<m;i++)
    {
      scanf("\n%c %d",&p,&k);
      printf("k=%d,d=%d\n",k,d);
      if(p=='R')
        printf("%d\n",arr[mod(k+d-1,n)]);
      else if(p=='A')
        d=mod(d+k,n);
      else
        d=mod(d-k,n);
    printf("k=%d,d=%d\n",k,d);
    }
    return 0;
}
