#include<stdio.h>
/*int min(int a,int b,int c)
{
    if(a<=b && a<=c)
        return a;
    if(b<=c && b<=a)
        return b;
    if(c<=a && c<=b)
        return c;
}*/
static int vec[1000000];
int main()
{
    int i,n1,n2,n3,l,m,k,n,t=0;
    scanf("%d%d%d",&n1,&n2,&n3);
    int a1[n1+1],a2[n2+2],a3[n3+1],final[n1+n2+n3+3];
    for(i=0;i<n1;i++)
        {
          scanf("%d",&a1[i]);
          vec[a1[i]]++;
        }
    for(i=0;i<n2;i++)
        {
          scanf("%d",&a2[i]);
          vec[a2[i]]++;
        }
    for(i=0;i<n3;i++)
        {
          scanf("%d",&a3[i]);
          vec[a3[i]]++;
        }
    /*l=m=n=0;
    while(l<n1 || m<n2 || n<n3)
    {
      k=min(a1[l],a2[m],a3[n]);
      if(k==a1[l] && k==a2[m] && k==a3[n])
       {
          final[t++]=k;
          l++;
          m++;
          n++;
       }
      else if(k==a1[l] && k==a2[m])
        {
          final[t++]=k;
          l++;
          m++;
        }
      else if(k==a1[l] && k==a3[n])
        {
          final[t++]=k;
          l++;
          n++;
        }
     else if(k==a2[m] && k==a3[n])
       {
         final[t++]=k;
         m++;
         n++;
       }
     else
     {
        if(k==a1[l] && l<n1)
            l++;
        else if(k==a2[m] && m<n2)
            m++;
        else if(k==a3[n] && n<n3)
            n++;
        else if((l==n1 && m==n2)||(m==n2 && n==n3)||(l==n1 && n==n3))
            break;
     }
  }*/
 // printf("%d\n",t);
  for(i=0;i<1000000;i++)
    if(vec[i]>=2)
      t++;
  printf("%d\n",t);
   for(i=0;i<1000000;i++)
    if(vec[i]>=2)
      printf("%d\n",i);
}
