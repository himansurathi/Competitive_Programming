#include<stdio.h>
#include<limits.h>
int main()
{
 int T,ng,nm,m,i,maxm,maxg;
 scanf("%d",&T);
 while(T--)
 {
     scanf("%d%d",&ng,&nm);
     maxg=INT_MIN;
     maxm=INT_MIN;
     for(i=0;i<ng;i++)
     {
         scanf("%d",&m);
         if (m>maxg)
             maxg=m;
     }
    for(i=0;i<nm;i++)
     {
         scanf("%d",&m);
         if (m>maxm)
             maxm=m;
     }
     if(maxm>maxg)
        printf("MechaGodzilla\n");
     else
        printf("Godzilla\n");
 }
return 0;
}

