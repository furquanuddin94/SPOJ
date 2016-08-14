#include<stdio.h>
#include<math.h>
int x[34000];
void prime(int );
void prime(int n)
{
	int i=2;
	while(n--)
	{
	for(int j=i+x[i];j<34000;j+=x[i])
		x[j]=0;
	int a=x[i];
	for(int j=x[i];j<34000;j++)
	{
		while(x[j]==0 && j<34000)
			j++;
		x[a]=x[j];
		a++;
	}
	//for(int j=2;j<=22;j++)
	
	//printf("%d \n",x[j]);
	//getchar();
	i++;
	}
	//return x[j+1];
}
int main()
{
	int n;
	for(int j=1;j<34000;j++)
		x[j]=j;
	prime(3000);
	while(scanf("%d",&n) && n)
	{
	printf("%d \n",x[n+1]);
	}
}
