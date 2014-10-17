#include<stdio.h>
#include<map.h>
int arr[100000][26];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d %d %d %d %d %d",&arr[i][0],&arr[i][2],&arr[i][10],&arr[i][14],&arr[i][18],&arr[i][22]);

    }
}
