//this one got submitted
#include<stdio.h>
#include<string.h>
int div(int [],int );
void print(int [], int );
int chartoint(char [], int []);
int dec(int [], int, int [] );
int inc(int [], int, int [] );
char x[105],t[105];
int a[105],c[105];
int la,lc;
int main()
{
	int te=10;
	while(te--)
	{
		
		scanf("%s",t);
		scanf("%s",x);
		la=chartoint(t,a);
	//	print(a,la);
		lc=chartoint(x,c);
		la=inc(a,la,c);
	//	print(a,la);
		la=div(a,la);
		print(a,la);
		la=dec(a,la,c);
		print(a,la);
	}
}
void print(int b[], int l)
{
	if(l==0)
	printf("0");
	for(int d=l-1;d>=0;d--)
				printf("%d",b[d]);
			printf("\n");
}
int chartoint(char m[], int b[])
{
	for(int i=0;i<105;i++)
	b[i]=0;
	if (m[0]=='0' && strlen(m)==1)
	{
	b[0]=m[0]-'0';
	return 0;
	}
	int j=0;
	for(int i=strlen(m)-1;i>=0;i--)
	{	b[j]=m[i]-'0';
		//printf("%d",b[j]);
		j++;
	}
	return strlen(m);
//	printf("\n");
}
int dec(int b[], int t,int c[])
{
	int d=0,lb=t,e=0;

		while(d!=t )
		{
			b[d]=b[d]-c[d];
			if(b[d]<0)
			{
				b[d]=b[d]+10;;
				b[d+1]--;
			}
			d++;
		}
		while(d--)
		{
			if(b[d])
			{
				lb=d+1;
				break;
			}
		lb=0;
		}		
	//	print();
		return lb;
}

int inc(int b[], int t, int c[])
{
	int d=0,lb=t,e=0;
	while(d!=t )
	{
		b[d]=b[d]+c[d];
		if(b[d]>=10)
		{
			b[d+1]=b[d+1]+b[d]/10;
			b[d]=b[d]%10;
			
		}
		if(b[d+1]!=0 && d==t-1)
			t++;
		d++;
	}
	//print(b,t);
	return t;
}

int div(int b[],int d)
{
	int lb=d;
	while(d--)
	{
		if(b[d]%2)
			b[d-1]=b[d-1]+10;
		b[d]=b[d]/2;
		if(d==lb-1 && b[d]==0)
			lb--;
		
	}
//	print(b,lb);
	return lb;
}
