#include<stdio.h>
void BubbleSort(int [], int );
int main()
{
	int t,a,m[1000],w[1000];
	scanf("%d \n",&t);
//	printf("t is %d \n", t);
	while(t--)
	{
		int c=0;
		scanf ("%d \n", &a);
	//	printf("a is %d \n",a);
		if(a>=1 && a<=1000)
		{
			int e=a,d=a;
			while (d--)
			{
				scanf("%d \n",&m[d]);
//				printf("m is %d \n", m[d]);
			}
			while (e--)
			{
				scanf("%d",&w[e]);
//				printf("w is %d \n", w[e]);
//				printf("c is %d \n",c);
			}
			BubbleSort(m,a);
			BubbleSort(w,a);
			while(a--)
			{
			//	printf("m is %d \n", m[a]);
			//	printf("w is %d \n", w[a]);
			c=c+m[a]*w[a];
			}
			printf("%d \n",c);
		}	
	}
	return 0;
}
void BubbleSort(int a[1000], int array_size)
{
     int i, j, temp;
     for (i = 0; i < (array_size - 1); ++i)
     {
          for (j = 0; j < array_size - 1 - i; ++j )
          {
               if (a[j] > a[j+1])
               {
                    temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
               }
          }
     }
}
