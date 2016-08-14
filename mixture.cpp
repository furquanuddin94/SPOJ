#include<stdio.h>
int matc(int [],int ,int );
int m[111][111],x[111][111];
int main()
{
	int n,a[100],i,j;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<111;i++)
		for(j=0;j<111;j++)
			m[i][j]=-1;
	printf("%d \n",matc(a,1,n));
	}
}

int matc(int a[],int s,int e)
{
	if (m[s][e]!=-1)
		return m[s][e];
	if(s==e)
	{
		m[s][e]=0;
		x[s][e]=a[s-1];
	}	
	else
	{
		int temp,i;
		for(i=s;i<e;i++)
		{
			temp=matc(a,s,i)+matc(a,i+1,e)+x[s][i]*x[i+1][e];
			x[s][e]=(x[s][i]+x[i+1][e])%100;
			if(temp<m[s][e] || m[s][e]==-1)
				m[s][e]=temp;
		}
	}
	return m[s][e];
}



