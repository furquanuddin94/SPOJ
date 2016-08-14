#include<stdio.h>
#include<stdlib.h>
void MergeSort(int [],int ,int );
int g[1000000],m[1000000];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int ng,nm;
		printf("\n");
		scanf("%d%d",&ng,&nm);
		for(int i=0;i<ng;i++)
			scanf("%d",&g[i]);
		for(int i=0;i<nm;i++)
			scanf("%d",&m[i]);
		MergeSort(g,1,ng);
		MergeSort(m,1,nm);
		if(g[ng-1]>=m[nm-1])
			printf("Godzilla \n");
		else
			printf("MechaGodzilla \n");
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
	free(b);
}
