#include<stdio.h>
#include<algorithm>
using namespace std;
long long int maxm(int ,int );
long long int v[2222],m[2222][2222];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	//v[i]=i;
		scanf("%d",&v[i]);
	printf("%lld",maxm(1,n));
}
long long int maxm(int i,int j)
{
	for(int x=0;x<j;x++)
	for(int y=i;y<=j-x;y++)
	{
		int z=y+x;
		int a=j-(z-y+1)+1;
		if(y==z)
			m[y][z]= v[y-1]*a;
		m[y][z]=max(v[y-1]*a+m[y+1][z],m[y][z-1]+v[z-1]*a);
	}
	return m[i][j];
}
