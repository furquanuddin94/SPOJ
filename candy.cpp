#include<stdio.h>
int main()
{
	long long int p,c[11111];
	while(scanf("%lld",&p) && p!=-1)
	{
		long long int t=0,m=0;
		for (int i=0;i<p;i++)
		{
			scanf("%lld",&c[i]);
			t=t+c[i];
		} 
		if(t%p)
			m=-1;
		else
		{
			
			t=t/p;
			
			for(int i=0;i<p;i++)
			{
				if(t>c[i])
					m=m+t-c[i];
			}
		}
		printf("%lld \n",m);
	}
}
