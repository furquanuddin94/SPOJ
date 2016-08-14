#include<stdio.h>
long int pal(long int);
int main()
{
	long int i=0,j,k;
	scanf("%ld",&i);
	while(i>0)
	{
		scanf("%ld",&j);
		printf("%ld \n",pal(j));
		i--;
	}
	return 0;
}

long int pal(long int a)
{
	long int b=0;
	
	while (a>=5)
	{
	b=b+a/5;
	a=a/5;
	}
	return b;
}
