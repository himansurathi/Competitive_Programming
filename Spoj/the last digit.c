#include<stdio.h>
#include<math.h>
#define MOD 10
long long int power(long long int base, long long int exp) {
    long long int  res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}
int main()
{
    int t,c,a;
    unsigned long long int b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%llu",&a,&b);
        c=b%4;
        printf("%d\n",((int)(power(a,c))%10));
    }
    return 0;
}
