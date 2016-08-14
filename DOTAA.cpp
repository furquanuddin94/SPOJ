#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int h,t,D,a[1111],x=0;
		scanf("%d%d%d",&h,&t,&D);
		for(int i=0;i<h;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%D)
			x=x+a[i]/D;
		}	
		if(x>=t)
		printf("YES \n");
		else
		printf("NO \n");
	}	
}