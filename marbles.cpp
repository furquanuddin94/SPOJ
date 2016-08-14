#include<stdio.h>
long long int c(long long int ,long long int );
int main()
{
	long long int t,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		printf("%lld \n",c(n-1,k-1));
	}
}
long long int c(long long int n,long long int r)
{
	if(r>n-r)
		r=n-r;
	long long int x=1;
	for(long long int i=0;i<r;i++)
	{
		if((n-i)%(i+1)==0)
			x=x*((n-i)/(i+1));
		else if(x%(i+1)==0)
			x=(x/(i+1))*(n-i);
		else
			x=(x*(n-i))/(i+1);
		
	}
	return x;
}
