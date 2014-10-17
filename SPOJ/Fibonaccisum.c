#include<stdio.h>
#include<conio.h>
int main()
{
   unsigned long long int initial_value,final_value,s1,temp_value,p,begin,end,count;
// count contains the number of elements to be generated.....
p=1000000007;
int T;
scanf("%d",&T);
while(T--)
{
scanf("%llu %llu",&begin,&end);
initial_value=0;
final_value=1;
for(count=2;count<=end+2;count++)
  {
    temp_value=(initial_value+final_value)%p;
    if(count==begin+1)
        s1=temp_value;
    initial_value=final_value%p;
    final_value=temp_value%p;
  }
printf("%llu\n",(temp_value-s1));
}
return 0;
}
