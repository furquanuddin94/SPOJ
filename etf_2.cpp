#include<stdio.h>
long long int etf(long long int );
long long int etf(long long int n)
{
	long long int z=n;
	for(long long int i=2;i*i<=n;i++) 		//because no. lower than i*i [like i*(i-1)] are already removed by previous no.[in this case (i-1)]
	{
		if(n%i==0)
		z-=z/i;
		while(n%i==0)
		n/=i;      							//so that the loop may run only for primes
	}
	if(n>1)
	z-=z/n;
	return z;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,x=1;
		scanf("%lld",&n);
		printf("%lld \n",etf(n));
	}
}
