#include<stdio.h>
#include<string.h>
#define max(a,b) (a>=b?a:b)
int lcs(char *p,char *q,int k)
{
    int i,j,arr[100][100][2],m=0,result=0,l1,l2;
    //initialise first row with 0
    l1=strlen(q);
    l2=strlen(p);
    for(i=0;i<=l1;i++)
       arr[0][i][0]=0;
    for(i=0;i<=l1;i++)
       arr[0][i][1]=0;
    // Initialize first column with 0
    for(i=0;i<=l2;i++)
       arr[i][0][0]=0;
    for(i=0;i<=l2;i++)
       arr[i][0][1]=0;

    for(i=1;i<=strlen(p);i++)
    {
        for(j=1;j<=strlen(q);j++)
        {
            //if letter in both strings match
            if(p[i-1]==q[j-1])
                {
                  arr[i][j][0]=arr[i-1][j-1][0]+1;
                  arr[i][j][1]=arr[i-1][j-1][1];
                  //m++;
                  printf("here i=%d j=%d p[i-1]=%c m=%d\n",i,j,p[i-1],m);
                }
            else
             {
                 if(arr[i-1][j-1][0]>=k)
                    arr[i][j][1]=arr[i-1][j-1][1]+arr[i-1][j-1][0];
                else
                    arr[i][j][1]=max(arr[i][j-1][1],arr[i-1][j][1]);
                arr[i][j][0]=1;
                 m=0;
             }
        }
    }
    for(i=1;i<=l1;i++)
    {
        if(result<arr[i][l2][1])
           result=arr[i][l2][1];
    }
    for(i=1;i<=l2;i++)
    {
        if(result<arr[i][l1][1])
           result=arr[i][l1][1];
    }
   printf("%d\n",result);
}
int main()
{
    int T,k;
    char p[100],q[100];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&k);
        scanf("%s",p);
        scanf("%s",q);
        lcs(p,q,k);
    }
return 0;
}
