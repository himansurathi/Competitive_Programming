#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
    int a,num,t,i=0,r;
    char b[252];
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d %s",&a,b);
    if(b==0)
      {
        printf("%d\n",a);
        exit(1);
      }
    else if(a==0)
        {
           printf("%s\n",b);
           exit(1);
        }
    else if(strlen(b)>=7)
    {
      num=(num*10+*(b+i)-'0')%a;
      i++;
    }
    else
        num=atoi(b);
    r=gcd(a,num);
    printf("%d\n",r);
    }
    return 0;
}
