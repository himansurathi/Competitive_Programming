#include<stdio.h>
int main()
{
    int T,n,inverse;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        if(n & 1)
            printf("%d\n",n);
        else{
            inverse=0;
            while(n>0)
             {
              inverse=inverse<<1;
              inverse=inverse | n & 1;// A sort of 2**p+q generate compare with decimal reversal of numbers
              n=n>>1;
             }
           printf("%d\n",inverse);
        }
    }
return 0;
}
