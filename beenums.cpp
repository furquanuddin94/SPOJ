#include<stdio.h>
#include<math.h>
int main()
{
	long long int b;
	while(scanf("%lld",&b) && b>=1 && b<=1000000000 && b!=-1)
	{	
		if(b%2)
		{
			b=b-1;
		//	printf("%d",b);
			if(b%3==0)
			{
				b=b/3;
				int t=sqrt(4*b+1);
			//	printf("%d",t);
				if(t*t==(4*b+1))
				{
					if(t%2)
					printf("Y \n");
					else
					printf("N \n");
				}	
				else
				printf("N \n");	
				
			}
			else
			printf("N \n");
		}
		else
		printf("N \n");
	
		
	}
	return 0;
}
