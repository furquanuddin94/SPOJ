#include<stdio.h>
void MergeSort(long long int [],int ,int );
long long int s[22222],d,tmp;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		if (n>=1 && k>=1)
		{
			for(int i=0;i<n;i++)
				scanf("%lld",&s[i]);
			MergeSort(s,1,n);
			for(int i=n-k;i>=0;i--)
			{
				tmp=s[i+k-1]-s[i];
				if(d>tmp || i==n-k)
				d=tmp;
			}
			printf("%lld \n",d);
		}
		else
		printf("0 \n");
	}
}
void MergeSort(long long int a[],int p,int r)
{
	long long int b[r-p+1];
	if(p!=r)
	{
		int q=(p+r)/2;
		MergeSort(a,p,q);
		MergeSort(a,q+1,r);
		int c=p,s=q+1;
		for(int i=0;i<=r-p;i++)
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
		for(int i=0;i<=r-p;i++)
			a[p-1+i]=b[i];
	}
	
}
