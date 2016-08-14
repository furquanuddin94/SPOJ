#include<stdio.h>
#include<stack>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n) && n)
	{
		int j=0,a[1111],tmp;
		stack<int> mystack;
		for (int i=0;i<n;i++)
		{
			scanf("%d",&tmp);
			while(!mystack.empty()  && mystack.top()<tmp)
			{
				a[j]=mystack.top();
				mystack.pop();
				j++;
			}
			mystack.push(tmp);
		}
		while(!mystack.empty())
		{
			a[j]=mystack.top();
			mystack.pop();
			j++;
		}
		int i=0;
		while(a[i]==i+1 && i<n)
		{
			//printf("%d %d \n",a[i],i);
			i++;
		}
		if(i==n)
		printf("yes \n");
		else
		printf("no \n");
		
				
		
	}
	
}

