#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int t=2370823708;
long long int fact(int n)
{
  long long int f=1,i;
  if(n==1)
    return 1;
  else
    for(i=2;i<=n;i++)
        f=((f%t)*(i%t))%t;
  return f;
}
int main()
{
    int arr[]={0,7,21,35,35,21,7,1},k;
    char m[17],n[17];
    long long int q,t=2370823708;
    scanf("%s%s%d",m,n,&k);
    if(strcmp(n,"9091")>=0)
        printf("0\n");
    else
    {
        int w=atoi(n);
        q=arr[k]*fact(w)%t;
        printf("%llu",q);
    }
}
