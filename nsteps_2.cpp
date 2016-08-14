#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int x,y;
		scanf("%lld%lld",&x,&y);
		if((x==y || (x-y)==2) && x%2)
			printf("%lld \n",x+y-1);
		else if(x==y || (x-y)==2)
			printf("%lld \n",x+y);
		else
		printf("No Number \n");
		
	}
}
