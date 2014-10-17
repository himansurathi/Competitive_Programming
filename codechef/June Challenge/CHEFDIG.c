#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(a,b) a<b?(a):(b)
int main()
{
    int l,m,i,*a,b[10],*jump;
    char s[100002];
    scanf("%s",s);
    l=strlen(s);
    a=(int*)malloc(sizeof(int)*l);
    jump=(int*)malloc(sizeof(int)*l);
    for(i=0;i<l;i++)
        a[i]=s[i]-48;
    for(i=0;i<10;i++)
        b[i]=-1;
    jump[0]=0;
    b[a[0]]=0;
    i=1;
    while(i<l)
    {
        if(b[a[i]]!=-1)
        {
            int temp= min(jump[i-1],jump[b[a[i]]]);
            jump[i]=1+temp;
            m=i;
            while(jump[m-1]>jump[m]+1)
            {
                jump[m-1]=jump[m]+1;
                m--;
            }
            if(jump[i]<(jump[b[a[i]]]+1))
                b[a[i]]=i;
        }
        else
        {
            b[a[i]]=i;
            jump[i]=jump[i-1]+1;
        }
        i++;
    }
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    printf("\n");
    for(i=0;i<l;i++)
        printf("%d ",jump[i]);
    printf("\n%d\n",jump[l-1]);
    return 0;
}
