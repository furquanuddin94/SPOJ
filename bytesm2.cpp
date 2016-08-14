#include<stdio.h>
#include<algorithm>
using namespace std;
int dis(int [111][111],int ,int );
int r,c,d[111][111],s[111][111];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int distance=0,tmp;
		scanf("%d%d",&r,&c);
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
			{
			//	s[i][j]=i+j;
				scanf("%d",&s[i][j]);
				d[i][j]=-1;
			//	printf("%d", d[i][j]);
			}
		for(int j=0;j<c;j++)
		{
			tmp=dis(s,0,j);
			if(distance<tmp)
			distance=tmp;
		}
		printf("%d \n",distance);	
		}
}
int dis(int k[111][111],int i,int j)
{
	if(d[i][j]!=-1) 
		return d[i][j];
	if(i==r-1) 
		d[i][j]=k[i][j];
	else if(j==0)
		d[i][j]=k[i][j]+max(dis(s,i+1,j),dis(s,i+1,j+1));
	else if(j==c-1)
		d[i][j]=k[i][j]+max(dis(k,i+1,j-1),dis(k,i+1,j));
	else 
		d[i][j]=k[i][j]+max(max(dis(k,i+1,j-1),dis(k,i+1,j)),dis(k,i+1,j+1));
	return d[i][j];
}
