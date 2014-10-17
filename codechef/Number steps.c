#include<stdio.h>
int main()
{
    int x,y,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&x,&y);
        if((x==y)||(x==(y+2)))
            printf("%d\n",(x+y-x%2));
        else
            printf("No Number\n");
    }
    return 0;
}
