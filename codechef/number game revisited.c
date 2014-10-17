#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
//Uncomment to get the result in output file that result is taken in an array and the program is done as time limit very less
/*
bool pallindrome(int);
bool prime(int);
int main()
{static int k=0,arr[10000000];
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
