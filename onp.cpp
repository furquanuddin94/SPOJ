#include<stdio.h>
#include<stack>
#include<string.h>
int p(char );
using namespace std;
char x[400];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",x);
		stack<char> mystack;
	//	printf("%d",mystack.top());
		for(int i=0;i<strlen(x);i++)
		{
			if(x[i]=='+'||x[i]=='-'||x[i]=='*'||x[i]=='/'||x[i]=='^'||x[i]=='(')
			{
				while(!mystack.empty() && p(x[i])<=p(mystack.top()) && mystack.top()!='(')
					{
						printf("%c",mystack.top());
						mystack.pop();
					}
		
			mystack.push(x[i]);
			}
			else if(x[i]==')')
			{
				while(mystack.top()!='(')
				{
					printf("%c",mystack.top());
					mystack.pop();
				}
				
				mystack.pop();
			}
			else
			{
				printf("%c",x[i]);
			}
			
			
		}
		while(!mystack.empty())
		{
			printf("%c",mystack.top());
			mystack.pop();
		}
		printf("\n");
	}
}
int p(char a)
{
	switch(a)
	{
		case '+':return 1;
		case '-':return 2;
		case '*':return 3;
		case '/':return 4;
		case '^':return 5;
		case '(':return 6;
	}
}
