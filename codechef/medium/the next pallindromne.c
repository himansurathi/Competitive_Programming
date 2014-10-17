#include<stdio.h>
#include<string.h>
void print(char *a ,int mid)
{
    int i;
for(i=0;i<=mid;i++)
   printf("%c",a[i]);
for(i=mid-1;i>=0;i--)
   printf("%c",a[i]);
printf("\n");
}
void odd_pall(char *a)
{
    int mid=strlen(a)/2,k,i,p=0;
    if(mid==0)
    {
       a[mid]++;
       print(a,mid);
    }
    else{
    for(k=1;k<=mid;k++)
    {
      if(a[mid-k]>a[mid+k])
      {
           print(a,mid);
           break;
      }
      else if(a[mid]=='9' && a[mid-k]<a[mid+k])
      {
        a[mid]='0';
        a[mid-k]++;
        print(a,mid);
        break;
      }
      else if((a[mid]=='9'||p==1) && a[mid-k]<=a[mid+k])
      {
        a[mid]='0';
        p=1;
        a[mid-k]=(a[mid-k]=='9')?'0':(a[mid-k]+1);
        if(a[mid-k]!='0')
            break;
      }
      else if(a[mid]!='9' && a[mid-k]<=a[mid+k])
      {
          a[mid]++;
          print(a,mid);
          break;
      }
  }
  if(p==1)
    print(a,mid);
    }
}
/*void print_even(char *a,int m)
{
  for(i=0;i<m;i++)
    printf("%d",a[i]);
  for(j=m1;j>=0;j--)
     printf("%d",a[i]);
}
void even_pall(char *a)
{
  int mid2=strlen(a1)/2;
  int mid1=mid2-1;
    for(k=1;k<=mid1;k++)
    {
      if(a[mid1-k]>a[mid2+k])
      {
           print_even(a,mid1);
           break;
      }
      else if(a[mid1]=='9' && a[mid1-k]<a[mid2+k])
      {
        a[mid]='0';
        a[mid-k]++;
        print(a,mid);
        break;
      }

}*/
int main()
{
    int T,q,i;
    char a[1000000];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s", a);
        q=strlen(a);
        for(i=0;i<q;i++)
            if(a[i]!='9')
              break;
        if(i==q)
        {
           printf("1");
           for(i=0;i<q-1;i++)
                printf("0");
                printf("1\n");
        }
       // else if(q%2!=0)
            odd_pall(a);
        /*else
            even_pall(a);*/
    }
    return 0;
}
