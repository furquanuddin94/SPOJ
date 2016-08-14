#include<stdio.h>
#include<algorithm>
using namespace std;
int mincost(int ,int ,int );
int maxfun(int ,int );
int m[101][501],f[100],c[100],cost;
int main()
{
	int b,p,fun=0;
	while(scanf("%d%d",&b,&p) && b && p)
	{
		for(int i=0;i<=100;i++)
		for(int j=0;j<=500;j++)
		{
		m[i][j]=-1;
		
		}
		for(int i=0;i<p;i++)
		{
			scanf("%d%d",&c[i],&f[i]);
		}
		
		fun=maxfun(p,b);
		cost=mincost(b,p,fun);
	
		printf("%d %d \n\n",cost,fun);
	}
}
int maxfun(int i,int b)
{
	if(m[i][b]!=-1)
		return m[i][b];
	else if(i==0 || b==0)
	return 0;
	else if(c[i-1]<=b)
	
		m[i][b]= max(maxfun(i-1,b-c[i-1])+f[i-1],maxfun(i-1,b));
	
	else
		m[i][b]= maxfun(i-1,b);
	return m[i][b];
}
int mincost(int b,int p,int ff)
{
	while(maxfun(p,b)==ff && b)
		b--;
	if(b)
		return b+1;
		return b;
}
