#include<stdio.h>
#define MAX 111111
long long int a[MAX],b[MAX],c;
int main()
{
	while(scanf("%lld",&c) && c)
	{
		long long int i=0;
		for(i=0;i<c;i++)
		{
			scanf("%lld",&a[i]);
			b[a[i]-1]=i+1;
		}
		long long int x=0;
		while(i-- && a[i]==b[i])
			x++;
		if(x==c)
		printf("ambiguous \n");
		else
		printf("not ambiguous \n");
			
	}
}
