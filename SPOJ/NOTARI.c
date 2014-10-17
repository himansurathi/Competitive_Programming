#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int binarysearch(int *arr,int k,int n,int x)
{
        int  y=n-1;
        int mid,i;
        while(x<=y)
        {
         mid=(x+y)/2;
         if (x==y && arr[mid]<k)
            {
              mid=x+1;
              break;
            }
         else if(k<arr[mid])
            y=mid-1;
          else
            x=mid+1;
        }
        if(k>=arr[mid])
        mid=-1;
       return mid;
}
int main()
{
int c,i,j,k,n,s;
scanf("%d",&n);
while(n)
{
int *arr=(int* )malloc(sizeof(int)*n);
for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
qsort(arr,n,sizeof(int),cmpfunc);
i=0;
c=0;
while(i<n-2)
{
  j=i+1;
while(j<n-1)
{
s=arr[i]+arr[j];
if(s>arr[n-1])
{
    j++;
    continue;
}
k=binarysearch(arr,s,n,j+1);
if(k!=-1)
c+=n-k;
j++;
}
i++;
}
printf("%d\n",c);
scanf("%d",&n);
}
return 0;
}
