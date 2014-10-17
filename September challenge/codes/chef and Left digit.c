#include<stdio.h>
#include<string.h>
#define MOD 1000000007
int main()
{
    int T,ans,i;
    char s[100002];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        fflush(stdin);
        ans=1;
        for(i=0;i<strlen(s);i++)
        {
            ans=(ans*2)%MOD;
            if(s[i]=='r' && i%2==0)
              ans+=2;
            else if(s[i]=='l' && i%2==1)
                ans-=1;
            else if(s[i]=='r' && i%2==1)
                ans+=1;
            ans=ans%MOD;
        }
        printf("%d\n",ans);
    }
    return 0;
}
