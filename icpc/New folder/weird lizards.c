#include<stdio.h>
int mat [80002][2];
int main()
{
    int n;
scanint(n);
scanf("%s",s);
len=strlen(s);
i=0;
    if(s[i]=='L')
        mat[i][0]=1;
    else
        mat[i][1]=1;

for(i=1;i<len;i++)
{
    if(s[i]=='L')
    {
        mat[i][0]=1+mat[i-1][0];
        mat[i][1]=mat[i-1][1];
    }
    else
       {
         mat[i][1]=1+mat[i-1][1];
         mat[i][0]=mat[i-1][0];
       }
}
for(i=len-1;i>=0;i--)
{
  if(s[i]=='L')
    a++;
  else
    res+=a;
}
scanint(q);
while(q--)
{
scanint(a);
scanint(b);
ql=mat[b][0]-mat[a][0]+1;
qr=mat[b][1]-mat[a][1]+1;
res+=mat[a-1][1]*qr+(mat[len-1][0]-mat[b][0])*ql
res-=(ql*mat[a-1][1]+qr*(mat[len-1][0]-mat[b][0]));

}
return 0;
}
