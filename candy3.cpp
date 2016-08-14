#include<stdio.h>
long long int p,c,te;
int main()
{
	
	scanf("%lld",&te);
	while(te--)
	{
		printf("\n");
		scanf("%lld",&p);
		long long int t=0,m=0;
		for (long long int i=0;i<p;i++)
		{
			scanf("%lld",&c);
			t=(t+c)%p;
		} 
		if(t)
			printf("NO \n");
		else
			printf("YES \n");
	}
}
