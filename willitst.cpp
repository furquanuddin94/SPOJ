#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	//getchar();
	while (n > 1)
	{
  		if (n%2 == 0) 
    		n=n/2;
  		else
  			break;
    	//	n=3*n+3;
	}
	if(n<=1)
		printf("TAK");
	else
		printf("NIE");
	
}
