#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i=1;
	while(t--)
	{
		long long int r;
		scanf("%lld",&r);
	  	printf("Case %d: %.2f \n",i++,4*r*r+.25);
	}
}
