#include<cstdio>
#include<map>
#define max(a,b) a>b?a:b
unsigned long long int cal(int p,int *arr)
{
    if(p<12)
        return p;
    else if(arr[p]!=-1)
        return arr[p];
    else
      {
        arr[p/2]=cal(p/2);
        arr[p/3]=cal(p/3);
        arr[p/4]=cal(p/4);
        return(max(p,cal(p/2)+cal(p/3)+cal(p/4));
      }
}
int main()
{
   unsigned long long int m,n,i,total;
   static int arr[1000000];
   for(i=0;i<12;i++)
       arr[i]=i;
   m=scanf("%llu",&n);
   while(m)
   {
     printf("%llu\n",cal(n));
     m=scanf("%llu",&n);
   }
 return 0;
}
