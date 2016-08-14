#include<stdio.h>
int main()
{
	long long int n,c=0;
	scanf("%lld",&n);
	while(n!=1 && n!=4)
	{
		long long int x=0;
		while(n!=0)
		{
			x+=(n%10)*(n%10);
			n=n/10;
		}
		n=x;
		c++;
	}
	if (n==1)
	printf("%lld",c);
	else
	printf("-1");
	
}
