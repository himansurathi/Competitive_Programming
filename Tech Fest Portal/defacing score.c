#include<stdio.h>
int main()
{
int i,j,a,b,m,k,t,n,d1,d2,arr1[10],arr2[10],arr3[10];
int max[]={8,9,8,9,9,9,8,9,8,9};
scanf("%d",&t);
while(t--)
{
    scanf("%d%d",&n,&m);
    if(n==m)
        printf("%d\n",n);
    else
    {
        b=n;
        d1=0;
        while(b>0)
        {
            arr1[d1++]=b%10;
            b/=10;
        }
        a=m;
        d2=0;
        while(a>0)
        {
            arr2[d2++]=a%10;
            a/=10;
        }
        for(i=d1;i<d2;i++)
            arr1[i]=0;
        if(d1<d2)
        {
            for(i=d2-1,m=0;i>=0;i--,m++)
            {
                if(arr1[i]<=arr2[i])
                    arr3[m]=arr2[i];
                else
                    break;
            }
            if(i!=-1)
            {
                if(arr1[i]!=0 || arr2[i]!=0)
                arr3[m-1]--;
                for(j=i;j>=0;j--,m++)
                {
                    arr3[m]=max[arr1[j]];
                }
            }
         }
         else
         {
            for(i=0;i<d1;i++)
            {
                for(j=0;j<sizeof(arr[i])/sizeof(arr[0]);j++)
                {
                  if(change[arr1[i]][j]<= arr2[i])
                    arr3[m]=change[arr1[i]][j];
                  else
                    break;
                }
                m++;
            }
         }
         for(i=0;i<m;i++)
         {
             printf("%d",arr3[i]);
         }
         printf("\n");
    }
}
return 0;
}
