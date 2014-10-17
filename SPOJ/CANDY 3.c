#include<stdio.h>
int main()
{
 unsigned long long int T,n,m,i,s;
 char *p;
 scanf("%llu",&T);
 while(T)
 {
     scanf("%llu",&n);
     s=0;
     i=0;
     while(i<n)
     {
       scanf("%llu",&m);
       s+=m;
       i++;
     }
     if(s%n==0)
        printf("YES\n");
     else
        printf("NO\n");
     T--;
 }
return 0;
}
