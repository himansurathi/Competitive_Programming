#include<stdio.h>
#include<math.h>
int modfind(int d,int m)
{
    int i=1;
    if(d<=0)
        return 0;
    int ans=1;
    while(i<d)
    {
      ans=(ans*10+1)%(-m);
      i++;
    }
    return ans;
}
int modfind10(int d,int m)
{
    int i=1;
    if(d<=1)
        return 0;
    int ans=1,p=10%(-m);
    while(i<d)
    {
        ans=(ans*p)%(-m);
        i++;
    }
    return ans;
}
int modfinal(int ans1,int ans2,int d,int r,int m)
{
  int ans=ans1;
  int i=1;
  while(i<d)
  {
   ans=(ans*ans2+ans1)%m;
   i++;
  }
  i=1;
  //printf("ans1= %d\n",ans1);
  while(i<=r)
  {
  ans=(ans*10+1)%m;
  i++;
  }
  return ans;
}
int main()
{
    int T,q,m;
    long long int n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld %d",&n,&m);
        q=sqrtf(n*1.0);
        printf("n=%lld q=%d act=%f\n",n,q,sqrtf(n*1.0));
        int ans1=modfind(q,m);
        int ans2=modfind10(q+1,m);
        printf("%d\n",modfinal(ans1,ans2,n/q,n%q,m));
    }
    return 0;
}
