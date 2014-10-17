#include<stdio.h>
#include<string.h>
int main()
{
    int len,i;
    long long dp[5006]={0};
    char q[5006];
    scanf("%s",&q);
    while(q[0]!='0')
    {
        len=strlen(q);
        dp[0]=1;
        if(q[0]>='1' && q[0]<='9')
            dp[1]=1;
        else
            {
                printf("0\n");
                fflush(stdin);
                scanf("%s",q);
                continue;
            }
        for(i=1;i<len;i++)
        {
            if(q[i]>='1' && q[i]<='9')
               {
                   if((q[i-1]=='1')||(q[i-1]=='2' && q[i]>='0' && q[i]<='6'))
                      dp[i+1]=dp[i]+dp[i-1];
                   else
                      dp[i+1]=dp[i];
               }
               else {
                   if((q[i-1]=='1')||(q[i-1]=='2' && q[i]>='0' && q[i]<='6'))
                      dp[i+1]=dp[i-1];
                    else
                        {
                            printf("0\n");
                            break;
                        }
                   }
         }
         if(i==len)
        printf("%d\n",dp[len]);
        fflush(stdin);
        scanf("%s",q);
     }
    return 0;
}
