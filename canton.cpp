#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,x=0,y=0,nx=1,ny=2;
		scanf("%lld",&n);
		for(long long int i=1;i<=n;i++)
		{
			if(x==2*nx-1)
			{
				x=1;
				nx=nx+2;	
			} 
			else 
			x++;
			if(y==2*ny-1)
			{
				y=1;
				ny=ny+2;	
			} 
			else 
			y++;
		}
		if(x>nx)
		x=2*nx-x;
		if(y>ny)
		y=2*ny-y;
		printf("TERM %lld IS %lld/%lld \n",n,x,y);
	}
}
