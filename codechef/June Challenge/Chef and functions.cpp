#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define p 1000000007
long long int mod(long long int b)
{
    if(b<0)
        return (p+b%p);
    else
        return(b%p);
}
inline void input( long long int &n )
 {
    n=0;
    long long int ch=getchar();
    int sign=1;
    while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getchar();}

    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getchar();
    n=n*sign;
  }
int main()
{
   long long int *arr,*res,x,a,s,m,T,n,q,i,j;
   input(T);
   while(T--)
   {
       input(n);
       input(q);
       arr=(long long int*)malloc(sizeof(long long int)*n);
       res=(long long int*)malloc(sizeof(long long int)*q);
       for(i=0;i<n;i++)
       {
         input(arr[i]);
         arr[i]=mod(arr[i]);
       }
       for(i=0;i<q;i++)
       {
          input(x);
          s=mod(mod(x)*arr[0]);
          if(x==0)
            res[i]=0;
          else
          {
          for(j=2;j<=n;j++)
             {
                if(m!=1)
                  {
                    m=powl(x,(float)1.0/j);
                    if(pow(m,j+1)<x)
                    m++;
                    else if(pow(m,j)>x)
                    m--;
                  }
                