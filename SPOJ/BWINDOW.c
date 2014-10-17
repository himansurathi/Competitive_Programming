#include<stdio.h>
int main()
{
 int T,i,r,p,N,max1;
 int R[1000];
 scanf("%d",&T);
  while(T>0)
  {
      scanf("%d",&N);
      max1=0;
      i=0;
      while(i<N)
      {
        scanf("%d%d",&r,&R[i]);
        //printf("r=%d R=%d",r,R[i]);
        if(r>max1)
        {
          max1=r;
          p=i+1;
        }
        i++;
      }
      i=0;
     while(i<N)
     {
         if(R[i]>max1&& i!=(p-1))
          {
            printf("-1\n");
             break;
          }
          else
          i++;
     }
     if(i>=N)
        printf("%d\n",p);
  T--;
  }
  return 0;
}
