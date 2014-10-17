#include <iostream>
#include <cstdio>

using namespace std;

long long int  power(long long int  a, long long int  n)
{
	if(n==0)
	return 1;
	if(n%2==0)
	return power(a,n/2)*power(a,n/2);
	else
	return power(a,(n-1)/2)*power(a,(n-1)/2)*a;
}

int main()
{

	long long int  a,n;
	scanf("%lld %lld",&a,&n);
	long long int  value=power(a,n);
	printf("%lld\n",value);
	return 0;
}
