#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
    long long int max_end,max_far,arr[100002],min,c;
    long long int count_end,new_max,count_max,T,i,flag,n;
    scanf("%llu",&T);
    while(T--)
    {
        scanf("%llu",&n);
        max_end=0;
        max_far=0;
        count_end=0;
        count_max=0;
        min=-INT_MAX;
        flag=1;
        c=0;
        for(i=0;i<n;i++)
        {
          scanf("%lld",&arr[i]);
          if(flag && arr[i]<0)
          {
            flag=1;
            if(arr[i]>min)
              {
                min=arr[i];
                c=1;
              }
            else if(abs(arr[i])==abs(min))
                c++;
          }
        else
            flag=0;
         }
          if(flag==1)
            printf("%lld %lld\n",min,c);
        else
        {
        for(i=0;i<n;i++)
        {
          new_max=arr[i]+max_end;
          if(new_max>=0)
          {
              if(count_end==0)
                count_end=1;
              else if(max_end==0)
                count_end+=1;
                max_end=new_max;
          }
          else
          {
              max_end=0;
              count_end=0;
          }
          if(max_end>max_far)
             {
                count_max=count_end;
                max_far=max_end;
             }
          else if(max_end==max_far)
          {
              count_max+=count_end;
          }
        }
        printf("%lld %lld\n",max_far,count_max);
      }
    }
  return 0;
}

