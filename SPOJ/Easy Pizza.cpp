#include<string.h>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int c,p,q,t,d,e,n;
char a[4];
 scanf("%d",&n);
     c=0;
     d=0;
     e=0;
     while(n)
     {
      fflush(stdin);
      scanf("%s",a);
     if(a=="")
        continue;
     if(a[0]==1  && a[2]==4)
        c++;
     else if(a[0]==3 && a[2]==4)
        d++;
     else
        e++;
     n--;
     }
     if(c==d)
        printf("%d\n",e/2+e%2+1);
     else if(c>d)
     {
        p=c-d;
        if(2*p>=e)
        {
          q=2*p-e;
            t=e;
        }
        else if(2*p<e)
        {
          q=e-2*p;
          t=p/2;
        }
        printf("%d\n",d+t+q/4+q%4+1);
     }
    else if(c<d)
     {
        p=d-c;
        printf("%d\n",c+e/2+e%2+p+1);
     }
    return 0;
}
