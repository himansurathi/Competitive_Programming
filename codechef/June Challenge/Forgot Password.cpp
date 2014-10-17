#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    unsigned long long int p,i,w,r,l,q;
    string s;
    char c,m;
    int a[128],T,n;
    scanf("%d",&T);
    while(T)
    {
        scanf("%d",&n);
        for(i=0;i<128;i++)
            a[i]=32;
        for(i=0;i<n;i++)
        {
            //fflush(stdin);
            scanf("%c %c",&c,&m);
            a[int(c)]=int(m);
        }
        //fflush(stdin);
        cin>>s;
        l=s.length();
        for(i=0;i<l;i++)
        {
            if(a[(int)s[i]]!=32)
               s[i]=(char)a[(int)s[i]];
        }
        q=s.find_first_not_of("0");
        if(q!=string::npos)
        {
          s=s.substr(q,l-q);
          w=s.find_last_not_of("0");
          r=s.find_first_of(".");
          if(w==r)
            w--;
          if(r!=string::npos)
          s=s.substr(0,w+1);
          if(s!="")
          printf("%s\n",s.c_str());
          else
            printf("0\n");
        }

        else
           printf("0\n");
        T--;
    }
    return 0;
}
