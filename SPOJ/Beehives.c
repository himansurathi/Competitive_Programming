#include<stdio.h>
int main()
{
int n;
long long int arr[20000],i,k,s=0;
scanf("%d",&n);
for(i=0;s<=1000000000;i++)
{
    s=3*i*(i+1)+1;
    arr[i]=s;
}
while(n!=-1)
{
  for(k=0;k<i;k++)
  {
    if(arr[k]==n)
     {
       printf("Y\n");
       break;
     }
    else if(arr[k]>n)
    {
      printf("N\n");
      break;
    }
  }
  scanf("%d",&n);
}
return 0;
}
