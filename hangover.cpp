#include<stdio.h>
int main()
{
	float c;
	while(scanf("%f",&c) && c)
	{
		float t=0;
		float x=0;
		while(x<c)
		{
			t++;
			x=x+1/(t+1);
		}
		printf("%.0f card(s) \n",t);
	}
}
