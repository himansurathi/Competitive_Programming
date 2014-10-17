#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
//Uncomment to get the result in output file that result is taken in an array and the program is done as time limit very less
/*
bool pallindrome(int);
bool prime(int);
int main()
{
  static int k=0,arr[10000000];
  bool v;
  for(int i=1;i<=10000000;i++)
   {
      v=pallindrome(i);
      if(v==true)
      {
        v=prime(i);
        if(v==true)
          arr[k++]=i;
     }
   }
   FILE *fp=fopen("output.txt","w");
   for(int i=0;i<k;i++)
    fprintf(fp,"%d,",arr[i]);
   cout<<"Total count="<<k;
   fclose(fp);
   return 0;
}
bool pallindrome(int k)
{
    int num=k,p=0;
    while(k!=0)
    {
      p=p*10+(k%10);
      k/=10;
    }
    if(num==p)
        return true ;
    else
        return false;
}
bool prime(int k)
{
    for(int i=2;i<=sqrt(k);i++)
    {
        if((k%i)==0)
            return false;
    }
    return true;
}*/
int main()
{
    int n;
    int arr[]={1,2,3,5,7,11,101,131,151,181,191,313,353,373,383,727,757,787,797,919,929,
               10301,10501,10601,11311,11411,12421,12721,12821,13331,13831,13931,14341,
               14741,15451,15551,16061,16361,16561,16661,17471,17971,18181,18481,19391,
               19891,19991,30103,30203,30403,30703,30803,31013,31513,32323,32423,33533,
               34543,34843,35053,35153,35353,35753,36263,36563,37273,37573,38083,38183,
               38783,39293,70207,70507,70607,71317,71917,72227,72727,73037,73237,73637,
               74047,74747,75557,76367,76667,77377,77477,77977,78487,78787,78887,79397,
               79697,79997,90709,91019,93139,93239,93739,94049,94349,94649,94849,94949,
               95959,96269,96469,96769,97379,97579,97879,98389,98689,1003001};
    cin>>n;
    for(int i=0;i<115;i++)
        if(arr[i]>=n)
          {
            cout<<arr[i]<<endl;
            break;
          }
    return 0;
}
