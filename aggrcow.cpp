#include<stdio.h>
#include<stdlib.h>
#define MAX 999999
void MergeSort(long long int [],long long int ,long long int );
void dis(long long int ,long long int );
long long int lo,hi,n,c,s[MAX];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&c);
		for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&s[i]);
		}
		MergeSort(s,1,n);
		lo=s[0];
		hi=s[n-1];
		while(lo<hi)
		{
		dis(lo,hi);
	//	printf("%lld%lld",lo,hi);
	//	getchar();
		}
		printf("%lld \n",lo);
	}
}
void dis(long long int l,long long int h)
{
	long long int mid=l+(h-l+1)/2;
	long long int ac=1,xc=s[0];
	for(long long int i=1;i<n;i++)
		if(s[i]-xc>=mid)
		{
			xc=s[i];
			ac++;
		}
		if(ac<c)
		hi=mid-1;
		else
		lo=mid;
}
void MergeSort(long long int a[],long long int p,long long int r)
{
	long long int *b=new long long int[r-p+1];
	if(p!=r)
	{
		long long int q=(p+r)/2;
		MergeSort(a,p,q);
		MergeSort(a,q+1,r);
		long long int c=p,s=q+1;
		for(long long int i=0;i<=r-p;i++)
		{
			if(c>q)
			{
				b[i]=a[s-1];
				s++;
			}
			else if(s>r)
			{
				b[i]=a[c-1];
				c++;
			}
			else if(a[c-1]<=a[s-1])
			{
				b[i]=a[c-1];
				c++;
			}
			else if(a[c-1]>a[s-1])
			{
				b[i]=a[s-1];
				s++;
			}
		}
		for(long long int i=0;i<=r-p;i++)
			a[p-1+i]=b[i];
	}
	free(b);
}
