#include<stdio.h>
int main()
{
	int n,x=0,y=0,z=0;
	int tmp1,tmp2;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&tmp1);
		getchar();
		scanf("%d",&tmp2);
	//	printf("%d \n %d \n",tmp1,tmp2);
		if(tmp1==3)
		x++;
		else if(tmp2==2)
		y++;
		else
		z++;
	}
	if(y%2)
		z=z-2;
	y=(y+1)/2;
	z=(z-x+3)/4;
	if(z<0)
		z=0;
	printf("%d",x+y+z+1);
}
