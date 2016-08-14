#include<stdio.h>
void MergeSort(int [],int ,int );
int main()
{
	int t,s=0;
	scanf("%d",&t);
	while(t--)
	{
		int f,a[1111];
		long int n,to=0;
		scanf("%ld%d",&n,&f);
		for(int i=0;i<f;i++)
		scanf("%d",&a[i]);
		MergeSort(a,1,f);
		int i=f;
		while(to<n && --i>=0)
		to+=a[i];
//		printf("%ld %d \n",to,a[i]);}
		if(to>=n)
		printf("Scenario #%d: \n%d \n\n",++s,f-i);
		else printf("Scenario #%d: \nimpossible \n\n",++s);
		
	}
}
void MergeSort(int a[],int p,int r)
{
	int *b=new int[r-p+1];
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
	//free(b);
}
