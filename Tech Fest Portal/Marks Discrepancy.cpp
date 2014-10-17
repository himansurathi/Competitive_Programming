#include<bits/stdc++.h>
#define gc getchar
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
int main()
{
    //freopen("in.txt","r",stdin);
    int n,i,j,m,flag,g,arr[5][101],counter[5],avg[5];
    char c;
    scanint(n);
    for(i=0;i<5;i++)
    {
        for(j=0;j<=100;j++)
            arr[i][j]=0;
        counter[i]=0;
    }
    for(i=0;i<n;i++)
     {
       scanf("%c",&c);
       scanint(m);
       arr[c-65][m]++;
       counter[c-65]++;
     }
     for(i=0;i<5;i++)
     avg[i]=counter[i]/10;
    for(i=0;i<5;i++)
    {
        flag=0;
        for(j=0;j<=100;j++)
        {
            if(arr[i][j]>avg[i])
             {
               printf("%d ",j);
               flag=1;
             }
        }
     if(flag==0)
        printf("Nothing Unusual");
     printf("\n");
    }
    return 0;
}
