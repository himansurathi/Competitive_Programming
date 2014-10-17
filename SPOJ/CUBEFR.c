#include<stdio.h>
int main()
{
int a[100002],i,m=2,j,n,flag=1;
a[0]=0;
a[1]=1;
scanf("%d",&n);
for(i=2;i<n;i++)
    a[i]=1;
while(m<=n)
{
   if(a[m]==1)
    {
      j=m*m*m;
      while(j<=n)
       {
         a[j]=0;
         j=j+m*m*m;
       }
    }
    m=m+1;
}
for(i=1;i<=n;i++){
    if(a[i]==1)
    printf("%d ",i);
}
return 0;
}
