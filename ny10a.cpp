#include<stdio.h>
void count(char []);
int x1,x2,x3,x4,x5,x6,x7,x8;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		char c[50];
		scanf("%d",&n);
		scanf("%s",&c);
		x1=0;
		x2=0;
		x3=0;
		x4=0;
		x5=0;
		x6=0;
		x7=0;
		x8=0;
		count(c);
		printf("%d %d %d %d %d %d %d %d %d \n",n,x1,x2,x3,x4,x5,x6,x7,x8);
	}
}
void count(char c[])
{
	for(int i=0;i<=37;i++)
	{
		if(c[i]=='T' && c[i+1]=='T' && c[i+2]=='T')
		x1++;
		else if(c[i]=='T' && c[i+1]=='T' && c[i+2]=='H')
		x2++;
		else if(c[i]=='T' && c[i+1]=='H' && c[i+2]=='T')
		x3++;
		else if(c[i]=='T' && c[i+1]=='H' && c[i+2]=='H')
		x4++;
		else if(c[i]=='H' && c[i+1]=='T' && c[i+2]=='T')
		x5++;
		else if(c[i]=='H' && c[i+1]=='T' && c[i+2]=='H')
		x6++;
		else if(c[i]=='H' && c[i+1]=='H' && c[i+2]=='T')
		x7++;
		else if(c[i]=='H' && c[i+1]=='H' && c[i+2]=='H')
		x8++;
	}
}
