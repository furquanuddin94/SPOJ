#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846264338327
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double a,b,c,d,s,k;
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2;
		k=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2f \n",k);
	}
}
