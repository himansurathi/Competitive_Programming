#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sea(int *arr,int y,int k)
{
int x=0,i,p;
for(i=0;i<=y;i++)
{
    if(arr[i]==k)
    {
      p=i;
      break;
    }
}
if(i==y+1)
  p=-1;
return p;
}
int main()
{
char n[100002];
int *arr,t,i,m,p,c=0;
scanf("%s",n);
t=strlen(n);
arr=(int*)malloc(sizeof(int)*t);
for(i=0;i<t;i++)
    arr[i]=n[i]-48;
t--;
p=arr[t];
while(t!=0)
{
  m=sea(arr,t-1,p);
  printf("%d %d \n",m,p);
  if(m!=-1)
     t=m;
  else
    t--;
  p=arr[t];
  c++;
}
printf("%d\n",c);
return 0;
}
