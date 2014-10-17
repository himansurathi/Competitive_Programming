#include<stdio.h>
int main()
{
	long long int f;
	double a,b,c,t;
	scanf("%lld",&f);
	while(f--)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		if(b>a)
		{
			t=b;
			b=a;
			a=t;
		}
		if(a>c+b)
		{
			c=a-c-b;
			a=b=0;
		}
		c=c-a-b;
		if(c<=0)
		c=0;
		printf("%.9lf\n",c);
	}
	return 0;
}
