#include<stdio.h>
#define PI 3.1415926
int main()
{
	int f;
	float a;
	while(scanf("%d",&f) && f)
	{
		a=(f/PI)*f/2;
		printf("%.2f \n",a);
	}
}
