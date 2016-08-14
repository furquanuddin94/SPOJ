#include<stdio.h>
int main()
{
	int b,g;
	while(scanf("%d%d",&g,&b) && (b!=-1 || g!=-1))
	{
		if(b>g)
		{
			int tmp=b;
			b=g;
			g=tmp;
		}
		int d=g/(b+1);
		if(g%(b+1))
		d++;
		printf("%d \n",d);
	}
}
