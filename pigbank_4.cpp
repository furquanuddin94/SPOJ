#include<stdio.h>
#include<algorithm>
using namespace std;
long int minval(long int ,long int );
long int v[11111],m[11111],w[11111];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int p,tw,n;
		scanf("%ld%ld%ld",&p,&tw,&n);
		for(long int i=0;i<n;i++)
		scanf("%ld%ld",&v[i],&w[i]);
		long int x=minval(n,tw-p);
		if (x!=-1)
		printf("The minimum amount of money in the piggy-bank is %ld.\n",x);
		else
		printf("This is impossible. \n");
	}
}
long int minval(long int n,long int wt)
{
	long int tmp=0;
	for(long int i=0;i<=wt;i++)
	{
		m[i]=0;
	for(long int j=1;j<=n;j++)
	{
		if(i==0)
		m[i]=0;
		else if(w[j-1]<=i && m[i-w[j-1]]!=-1)
		{
			tmp=v[j-1]+m[i-w[j-1]];
			if(m[i]<=0 || m[i]>tmp)
				m[i]=tmp;
		}
		else if(m[i]==0)
		m[i]=-1;
	}
	}
	return m[wt];
}

