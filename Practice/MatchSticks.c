#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    int t,s,s2,i,n,k,a[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        s=0;
        s2=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            s+=a[i];
        }
        qsort(a,n,sizeof(int),cmpfunc);
        int max=(2*k<=n)?k:(n-k);
        for(i=0;i<max;i++)
            s2+=a[i];
        printf("%d\n",s-2*s2);
    }
    return 0;
}
