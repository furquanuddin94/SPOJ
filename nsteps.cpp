#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int x,y,n=-1,X=-1,Y=-1;
		scanf("%lld%lld",&x,&y);
		if((x-y)!=2 && x!=y)
		printf("No Number \n");
		else
		{
			int i=4,j=2;
			while(X!=x || Y!=y)
			{
				if(i--)
					X++;
				else 
				{
					i=3;
					X--;	
				}
				if(j--)
					Y++;
				else 
				{
					j=3;
					Y--;	
				}
				n++;	
		//		printf("%lld   %lld %lld",n,X,Y);
		//		getchar();
			}
			printf("%lld \n",n);
		}
	}
}
