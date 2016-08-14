#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c) && (a || b || c))
	{
		if(b-a==c-b)
		printf("AP %d \n",c+b-a);
		else
		printf("GP %d \n",c*b/a);
	}
}
