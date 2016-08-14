#include<stdio.h>
double max(double ,double );
void safe(int [111][111],int );
double m[111][111];

int main()
{
	
	int n,s,x,y;
	while(scanf("%d",&n) && n)
	{
		int a[111][111];
		for(int i=0;i<111;i++)
		for(int j=0;j<111;j++)
		a[i][j]=0;
		scanf("%d",&s);
		for(int t=0;t<s;t++)
		{
		scanf("%d%d",&x,&y);
		scanf("%d",&a[x][y]);
		}
		safe(a,n);
		printf("%.6lf percent \n",m[1][n]);
	}
}
void safe(int a[111][111],int d)
{
	for(int l=0;l<=d;l++)
	for(int i=1;i<=d;i++)
	for(int j=1;j<=d;j++)
	{
		if(l==0)
		m[i][j]=max(a[i][j],a[j][i]);
		else
		{
		double tmp=(m[i][l]*m[l][j])/100;
		m[i][j]=max(tmp,m[i][j]);
		}
	}
}
double max(double a,double b)
{
	if(a>b)
	return a;
	else
	return b;
}
