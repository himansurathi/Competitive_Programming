#include<stdio.h>
int main()
{
    int T,n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        if(n%2==0)
          printf("1\n");
        else
            printf("0\n");
    }
    return 0;

}
