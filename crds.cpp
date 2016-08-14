#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		n=n*(n+1)+((n-1)*(n)/2);
		printf("%lld \n",n%1000007);
	}
}
