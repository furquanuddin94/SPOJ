//this one got submitted
#include<stdio.h>
#include<string.h>
void print();
void chartoint();
void mul();
void dec();
char a[105];
int b[105],l;
int main()
{
	while(scanf("%s",a)!=EOF)
	{
		chartoint();
		if(b[0]==0 && l==1)
			printf("0 \n");
		else if(b[0]==1 && l==1)
			printf("1 \n");
		else
		{
			dec();
			mul();
			print();
		}
		for(int i=0;i<105;i++)
			b[i]=0;
	}
}
void print()
{
	for(int d=l-1;d>=0;d--)
				printf("%d",b[d]);
			printf("\n");
}
void chartoint()
{
	int j=0;
	for(int i=strlen(a)-1;i>=0;i--)
	{	b[j]=a[i]-'0';
		//printf("%d",b[j]);
		j++;
	}
	l=strlen(a);
//	printf("\n");
}
void dec()
{
	int d=0,t=l;
	b[d]=b[d]-1;
	do
	{
		if(b[d]==-1)
		{
			b[d]=9;
			b[d+1]--;
		}
		if(b[d]==0 && d==t-1)
		l--;
	}
	while(++d!=t);
//	print();
	
}
void mul()
{
	int d=l;
	while(d--)
	{
		b[d]=b[d]*2;
		while(b[d]>=10)
		{
		//	printf("%d \n",b[d+1]);
			if(d==l-1)
			l=l+1;
			b[d+1]++;
			b[d]=b[d]-10;
		}
		
	}

}
