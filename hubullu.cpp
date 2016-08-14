#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,p;
		scanf("%lld%lld",&n,&p);
		if(p==0)
		printf("Airborne wins. \n");
		else if(p==1)
		printf("Pagfloyd wins. \n");
	}
}
