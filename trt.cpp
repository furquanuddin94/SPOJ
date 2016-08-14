#include<stdio.h>
#include<algorithm>
using namespace std;
long long int maxm(int ,int ,int );
long long int v[2222],m[2222][2222];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&v[i]);
	printf("%lld",maxm(1,n,1));
}
long long int maxm(int i,int j,int a)
{
	if (m[i][j]!=0)
		return m[i][j];
	else if(i==j)
	m[i][j]= v[i-1]*a;
	else
	m[i][j]=max(v[i-1]*a+maxm(i+1,j,a+1),maxm(i,j-1,a+1)+v[j-1]*a);
//	printf("%lld",m[i][j]);
	return m[i][j];
}
