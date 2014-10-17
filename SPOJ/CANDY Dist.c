#include<stdio.h>
#include<stdlib.h>
unsigned long long int cmpfunc1(const void *a, const void *b)
{
    const unsigned long long *x = a, *y = b;
    if(*x > *y)
        return 1;
    else
        return (*x < *y) ? -1 : 0;
}
unsigned long long int cmpfunc2 (const void * a, const void * b)
{
const unsigned long long *x = a, *y = b;
    if(*x < *y)
        return 1;
    else
        return (*x > *y) ? -1 : 0;
}
int main()
{
    unsigned long long int *a1,*a2,n,s,i;
    scanf("%llu",&n);
    while(n)
    {
    s=0;
    a1=(unsigned long long int*)malloc(sizeof(unsigned long long int)*n);
    a2=(unsigned long long int*)malloc(sizeof(unsigned long long int)*n);
    for(i=0;i<n;i++)
        scanf("%llu",&a1[i]);
    for(i=0;i<n;i++)
        scanf("%llu",&a2[i]);
    qsort(a1,n,sizeof(unsigned long long int),cmpfunc1);
    qsort(a2,n,sizeof(unsigned long long int),cmpfunc2);
    for(i=0;i<n;i++)
       s+=a1[i]*a2[i];
    printf("%llu\n",s);
    scanf("%llu",&n);
    }
   return 0;
}
