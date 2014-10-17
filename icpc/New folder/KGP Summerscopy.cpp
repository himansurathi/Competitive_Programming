#include<stdio.h>
#include<stdlib.h>

#define sc(n) scanf("%d",&n)
#define pr(n) printf("%d",n)
#define fr(i,ini,fi) for(i=ini;i<fi;i++)
#define endl printf("\n")
#define spc printf(" ")
#define MIN 1000000000


typedef struct points
{
	int x,y,dist,flag;
}pts;

pts arr[2510];

int dist(int ini,int fi)
{
	return ((arr[ini].x-arr[fi].x)*(arr[ini].x-arr[fi].x))+((arr[ini].y-arr[fi].y)*(arr[ini].y-arr[fi].y));
}

int main()
{
	int t,count;
	freopen("input.txt","r",stdin);sc(t);
	fr(count,0,t)
	{
		int n,i,j,k,l,min=MIN;
		sc(n);
		fr(i,0,n+2)
		{
			scanf("%d%d",&arr[i].x,&arr[i].y);
			arr[i].flag=0;
		}
		arr[n+1].flag=1;
		arr[n+1].dist=0;
		fr(i,0,n+1)
		{
			arr[i].dist=dist(i,n+1);
			if(min>arr[i].dist)
			{
				min=arr[i].dist;
				j=i;
			}
		}
		arr[j].flag=1;
		while(arr[n].flag!=1)
		{
			min=MIN;
			l=j;
			fr(i,0,n+1)
			{
				if(arr[i].flag!=1)
				{
					if(arr[i].dist>arr[j].dist+dist(i,j))
						arr[i].dist=arr[j].dist+dist(i,j);
					if(min>arr[i].dist)
					{
						min=arr[i].dist;
						l=i;
					}
				}
			}
			arr[l].flag=1;
			j=l;
		}
		pr(arr[n].dist);endl;
	}
	return 0;
}
