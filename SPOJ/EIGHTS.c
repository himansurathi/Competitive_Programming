#include<stdio.h>
int main()
{
unsigned long long int n;
int T,a[4]={192,442,692,942};
scanf("%d",&T);
while(T--)
{
    scanf("%llu",&n);
    printf("%llu\n",(n-1)/4*1000+a[(n-1)%4]);
}
return 0;
}
