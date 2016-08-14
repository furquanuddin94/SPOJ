#include<stdio.h>
#include<string.h>
#define MAX 1111
int inc(int [], int , int );
int chartoint(char [], int []);
void print(int [], int );
char n[MAX];
int f[MAX],lf;
int x[MAX],lx;
int r;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",n);
		lf=chartoint(n,f);
		lx=chartoint(n,x);
		r=100*x[2]+10*x[1]+x[0];
		if(r)
		{
			int i=r;
			while(--i)
			{
				
				//lx=dec(x,lx);
				lf=inc(f,lf,i);
				
			}
		}
		print(f,lf);	
	}
}

void print(int b[], int l)
{
//	if(l==0)
//	printf("0");
	for(int d=l-1;d>=0;d--)
				printf("%d",b[d]);
			printf("\n");
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

int inc(int b[], int t,int r)
{
	int d=0,lb=t,e=0;
	while(d!=t )
	{
		b[d]=b[d]*r+e;
		if(b[d]>=10)
		{
			e=b[d]/10;
			b[d]=b[d]%10;
			
		}
		else e=0;
		if(e!=0 && d==t-1 )
			t++;
		d++;
	}
	
	//print(b,t);
	return t;
}
