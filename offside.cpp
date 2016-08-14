#include<stdio.h>
void BubbleSort(int [100], int );
int main()
{
	int a,d,b[100],c[100];
	while(scanf("%d%d",&a,&d) && (a || d))
	{
		for(int i=0;i<a;i++)
		scanf("%d",&b[i]);
		for(int i=0;i<d;i++)
		scanf("%d",&c[i]);
		BubbleSort(b,a);
		BubbleSort(c,d);
		if(b[0]<c[1])
		printf("Y \n");
		else
		printf("N \n");
	}
}

void BubbleSort(int a[100], int array_size)
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
