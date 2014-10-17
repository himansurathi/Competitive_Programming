// Longest Common Subsequence
#include<stdio.h>
#include<string.h>
#define max(a,b) (a>=b?a:b)
/* Recusive Implementation of Longest common Subsequence */
int rlcs(char *p,char *q,int i,int j)
{
if(i==0|| j==0)
    return 0;
else if(p[i-1]==q[j-1])
    return (rlcs(p,q,i-1,j-1)+1);
else
    return (max(rlcs(p,q,i,j-1),rlcs(p,q,i-1,j)));
}
/* Dynamic Programming Implementation */
int lcs(char *p,char *q)
{
    int i,j,arr[100][100];
    //initialise first row with 0
    for(i=0;i<=strlen(q);i++)
       arr[0][i]=0;
    // Initialize first column with 0
    for(i=0;i<=strlen(p);i++)
       arr[i][0]=0;

    for(i=0;i<strlen(p);i++)
    {
        for(j=0;j<strlen(q);j++)
        {
            //if letter in both strings match
            if(p[i]==q[j])
                arr[i+1][j+1]=arr[i][j]+1;
            else
                arr[i+1][j+1]=max(arr[i+1][j],arr[i][j+1]);
        }
    }
   for(i=0;i<=strlen(p);i++)
   {
       for(j=0;j<=strlen(q);j++)
        printf("%d ",arr[i][j]);
       printf("\n");
   }
   return arr[strlen(p)][strlen(q)];
}
int main()
{
    int T;
    char p[100],q[100];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",p);
        scanf("%s",q);
        printf("Longest common length is %d\n",lcs(p,q));
        printf("Recusively Longest common length is %d\n",rlcs(p,q,strlen(p),strlen(q)));
    }
return 0;
}
