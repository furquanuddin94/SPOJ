#include<stdio.h>
int main()
{
	long long int n;
	while(scanf("%lld",&n) && n)
	{
		long long int t=0;
		for(long long int i=1;i<=n;i++)
		{
			t=t+(n-i+1)*(n-i+1);
		}
		printf("%lld \n",t);
	}
}
