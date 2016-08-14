#include<stdio.h>
#include<string.h>
#define MAX 1111111
void print(int [], int );
int chartoint(char [], int []);
int inc(int [], int );
int cmp(int [],int [], int );
void pal(int [],int );
char s[MAX];
int x[MAX],y[MAX];
int lx,ly;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		lx=chartoint(s,x);
		ly=chartoint(s,y);
		pal(y,ly);
		while(!cmp(y,x,ly))
		{
			ly=inc(y,ly);
			
			pal(y,ly);
		}
		print(y,ly);
	}
}
void pal(int m[],int lm)
{
		for(int i=1;i<=lm/2;i++)
		{
			m[i-1]=m[lm-i];
		}
}
int cmp(int m[],int n[], int lm)
{
		for(int i=lm-1;i>=0;i--)
		{
			if(	m[i]>n[i])
			return 1;
			else if(m[i]<n[i])
			return 0;
		}
		return 0;
}
int inc(int b[], int t)
{
	int d=t/2,lb=t;
	b[d]=b[d]+1;
	do
	{
		if(b[d]==10)
		{
			b[d]=0;
			b[d+1]++;
		}
		if(b[d]==0 && d==t-1)
		lb++;
	}
	while(++d!=t);
//	print();
	return lb;
}
int chartoint(char m[], int b[])
{
	for(int i=0;i<MAX;i++)
	b[i]=0;
/*	if (m[0]=='0' && strlen(m)==1)
	{
	b[0]=m[0]-'0';
	return 0;
	}*/
	int j=0;
	for(int i=strlen(m)-1;i>=0;i--)
	{	b[j]=m[i]-'0';
		//printf("%d",b[j]);
		j++;
	}
	return strlen(m);
//	printf("\n");
}
void print(int b[], int l)
{
	if(l==0)
	printf("0");
	for(int d=l-1;d>=0;d--)
				printf("%d",b[d]);
			printf("\n");
}
