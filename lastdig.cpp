#include<stdio.h>
int main()
{
	long long int b,n,t;
	scanf("%lld",&t);
	while(t--)
	{
	scanf("%lld%lld",&b,&n);
	if(n%4) n=n%4;
	else if(!(n%4) && n) n=4;
	long long int r=1;
	while(n--)
	r=r*b;
	printf("%lld \n",r%10);
	}
	
}
