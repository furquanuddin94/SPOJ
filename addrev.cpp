#include<stdio.h>
long long int pal(long long int);
int main()
{
	long long int i=0,j,k;
	scanf("%lld",&i);
	while(i>0)
	{
		scanf("%lld%lld",&j,&k);
		long long int l=pal(j)+pal(k);
		long long int m=pal(l);
		printf("%lld \n",m);
		i--;
	}
	return 0;
}
long long int pal(long long int a)
{
	long long int b=0;
	while (a!=0)
	{
		b=b*10+a%10;
		a=a/10;
	}
	return b;

}
