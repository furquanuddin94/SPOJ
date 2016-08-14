#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
#define MAX 100000000
using namespace std;
int main()
 {int n; while(scanf("%d",&n)!=EOF)
   { 
   int a[n+1];

   int i,j,k;
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   int colour[n+1][n+1],cost[n+1][n+1];
   for(i=1;i<=n;i++)
    {colour[i][i]=a[i];
    cost[i][i]=0;
    }
   int l;
   for(l=2;l<=n;l++)
     { for(i=1;i<=n-l+1;i++)
     {
     int thiscost;
     j=i+l-1;
     cost[i][j]=MAX;
     for(k=i;k<=j-1;k++)
       { 
	    colour[i][j]=(colour[i][k]+colour[k+1][j])%100;
       thiscost=colour[i][k]*colour[k+1][j]+cost[i][k]+cost[k+1][j];
       if(thiscost<cost[i][j])
       cost[i][j]=thiscost;
       
       }
     }}
    printf("%d\n",cost[1][n]);
 
   }
 return 0;
 
 }
