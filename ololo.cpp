#include<stdio.h>
long long int a[5000000],t,b=0;
int main()
{
	
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&a[t]);
		b=b^a[t];
	}
		printf("%lld \n",b);
		return 0;
}

