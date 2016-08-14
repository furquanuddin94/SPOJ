#include<stdio.h>
#include<string.h>
char s[200],t[200];
int main()
{
	int r,c,a[100][100];
	
	while(scanf("%d",&c) && c)
	{
	int m=0,i=0;
	scanf("%s",s);
	r=strlen(s)/c;
	while(i<r)
	{
		for(int j=0;j<c;j++)
		a[i][j]=s[m++];
		i++;
		if(i<r)
		{
		for(int j=c-1;j>=0;j--)
		a[i][j]=s[m++];
		i++;
		}
	}
	m=0;
	for(int j=0;j<c;j++)
	{
		for(int i=0;i<r;i++)
		s[m++]=a[i][j];
	}
	puts(s);
	}
}
