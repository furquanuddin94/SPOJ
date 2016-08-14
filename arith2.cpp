#include<stdio.h>
int main()
{
	
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		printf("\n");
		long long int a,b;
		char o=0;
		scanf("%lld",&a);
		while(o!=61 && scanf("%c",&o))
		{
		while(o==32)
		scanf("%c",&o);
		switch(o)
		{
			case '+':scanf("%lld",&b);
			a=a+b;
			break;
			case '-':scanf("%lld",&b);
			a=a-b;
			break;
			case '*':scanf("%lld",&b);
			a=a*b;
			break;
			case '/':scanf("%lld",&b);
			a=a/b;
			break;
		}
		}
		printf("%lld \n",a);
	}
	
}
