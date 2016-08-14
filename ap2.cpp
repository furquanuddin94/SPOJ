#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a,b,s,n,d;
		scanf("%lld%lld%lld",&a,&b,&s);
		n=2*s/(a+b);
		d=(b-a)/(n-5);
		printf("%lld \n",n);
		for(long long int i=-2;i<n-2;i++)
			printf("%lld ",a+i*d);
		printf("\n");
	}
}
