#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include<vector>
#include<set>
using namespace std;
int res[2000],len[2000];
vector<int>v[11];

int main()
{

	int i,j,t,k=0,n,p,f,m,a[101],b[20];
	for(i=1;i<1024;i++)
	{
		j=0,k=i;
		while(k>0)
		{
			j=j+k%2;
			k=k/2;
		}
//		if(i<10)
//		 cout<<j<<endl;
		v[j].push_back(i);
	}
	while(cin>>n)
	{
	for(i=0;i<n;i++)
	 cin>>a[i];
	for(i=0;i<1200;i++)
	 res[i]=0,len[i]=0;
	for(i=0;i<n;i++)
	{
		k=0;
		t=a[i];
		while(t!=0)
		{
			p=t%10;
			t=t/10;
			k=k|(1<<p);
		}
		res[k]=max(a[i],res[k]);
		len[k]=1;
//		cout<<k<<endl;
	}

    for(i=2;i<11;i++)
    {
 //     cout<<v[i].size()<<endl;
      for(k=0;k<v[i].size();k++)
	  {
    	for(j=v[i][k];j>0;j=((j-1)&v[i][k]))
    	{
    	  	if(res[v[i][k]]==res[j]+res[v[i][k]-j])
    		{
    			if(len[v[i][k]]<len[j]+len[v[i][k]-j])
    			 len[v[i][k]]=len[j]+len[v[i][k]-j];
    		}
    		else
    		{
    		 if(res[v[i][k]]<res[j]+res[v[i][k]-j])
    		 {
    	       res[v[i][k]]=res[j]+res[v[i][k]-j];
    		   len[v[i][k]]=len[j]+len[v[i][k]-j];
    	     }
    	    }
    	}
      }
    }
    cout<<len[1023]<<endl;
   }
	return 0;
}
