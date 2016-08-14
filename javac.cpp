#include<stdio.h>
#include<string.h>
void javatoc(char []);
void ctojava(char []);
char x[100];
int main()
{
	while(scanf("%s",x)!=EOF)
	{
		int i=strlen(x),j=0,c=0;
		while(i-- && x[0]>=97 && x[0]<=122 && x[strlen(x)-1]!=95)
		{
			if((x[i]>=97 &&x[i]<=122) || (x[i]>=65 &&x[i]<=90))
			j++;
			if((x[i]>=97 &&x[i]<=122) || (x[i]==95 && x[i+1]!=95))
			c++;
		}
		if(j==strlen(x))
		javatoc(x);
		else if (c==strlen(x))
		ctojava(x);
		else
		strcpy(x,"Error!");
		printf("%s \n",x);
		strcpy(x,"\0");
	}
}
void javatoc(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>=65 &&s[i]<=90)
		{
			for(int j=strlen(s)+1;j>i;j--)
				s[j]=s[j-1];
			s[i+1]=s[i+1]+32;
			s[i]=95;
		}
	}
}
void ctojava(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==95)
		{
			for(int j=i;j<strlen(s);j++)
				s[j]=s[j+1];
			s[i]=s[i]-32;
		}
	}
}
