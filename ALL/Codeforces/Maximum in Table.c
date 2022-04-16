#include<stdio.h>
int main()
{
	int i,j,n,x[20][20];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i==0 || j==0) x[i][j]=1;
			else x[i][j]=x[i-1][j]+x[i][j-1];
		}
	}
	printf("%d\n",x[n-1][n-1]);
	return 0;
}