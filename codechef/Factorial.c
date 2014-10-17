#include<stdio.h>
int  main()
{
 int i,n,m,t,x,p,temp;
 int arr[200];
 i=0;
 while(i<=200)
     arr[i++]=0;
 scanf("%d",&t);
 while(t>0)
 {
   scanf("%d",&n);
   i=2;
   arr[0]=1;
   m=1;
   while(i<=n)
   {
     p=0;
     temp=0;
     while(p<m)
      {
        x=arr[p]*i+temp;
        arr[p]=x%10;
        temp=x/10;
        p++;
      }
      while(temp!=0)
      {
        arr[p]=temp%10;
        temp=temp/10;
        p++;
        m++;
      }
     i++;
   }
   while(m>0)
   {
       printf("%d",arr[m-1]);
       m--;
   }
   printf("\n");
   t--;
 }
 return 0;
}
