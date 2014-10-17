#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,*arr,c,n,i;
    scanf("%d",&n);
    max=0;
    c=0;
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
          if(arr[i]!=0)
            c++;
          else
          {
              if(c>max)
                  max=c;
               c=0;
          }
      }
  printf("%d\n",(max>c?max:c));
  return 0;
}

