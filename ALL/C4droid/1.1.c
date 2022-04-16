#include<stdio.h>
int main()
{
	int n,i,j,a[100][100];
	while (scanf("%d",&n)==1)
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if (i+j==n-1) a[i][j]=1;
				else a[i][j]=0;
			}
		}
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}