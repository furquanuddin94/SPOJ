#include<stdio.h>
int main()
{
	long long int s,i,n=0;
	scanf("%lld",&s);
	do
	{
		long long int m=0;
		if(s)
			m++;
		for(i=1;i<=(s/2);i++)
			if(!(s%i))
				m++;
		n=n+(m+1)/2;
	}
	while(s--);
	printf("%lld",n);
}
