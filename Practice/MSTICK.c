#include<stdio.h>
int main()
{
    int n,i,l,j,r,max1,max2,min,q;
    float ans;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
      scanf("%d",&b[i]);
    scanf("%d",&q);
    for(j=0;j<q;j++)
    {
      scanf("%d%d",&l,&r);
      max1=0;
      max2=0;
      min=100000001;
      for(i=0;i<n;i++)
        {
          if(i>=l && i<=r && b[i]<min)
                min=b[i];
          if(i>=l && i<=r && b[i]>max1)
                max1=b[i];
          else if((i<l || i>r) && b[i]>max2)
                max2=b[i];
         }
      ans=(((max2+min/2.0)>=(max1/2.0))?(max2+min):((max1+min)/2.0));
      printf("%.1f\n",ans);
    }
    return 0;
}
