#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
   int T,i,c,men[1000],women[1000],n;
   scanf("%d",&T);
   while(T--)
   {
       c=0;
       scanf("%d",&n);
       for(i=0;i<n;i++)
          scanf("%d",&men[i]);
       for(i=0;i<n;i++)
          scanf("%d",&women[i]);
        qsort(men,n,sizeof(int),cmpfunc);
        qsort(women,n,sizeof(int),cmpfunc);
        for(i=0;i<n;i++)
            c+=men[i]*women[i];
        printf("%d\n",c);
   }
    return 0;
}
