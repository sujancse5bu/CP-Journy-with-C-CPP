#include<stdio.h>
#include<string.h>
int a[1000][1000];
char x[1000],y[1000];
int edit_distance (int n, int m);
int main ()
{
	int m,n;
	scanf("%s%s",x,y);
	n=strlen(x);
	m=strlen(y);
	int l=edit_distance (n,m);
	printf ("The edit distance = %d\n",l);
	return 0;
}
int edit_distance (int n, int m)
{
	int i,j;
	for (i=0;i<=n;i++)
	{
		for (j=0;j<=m;j++)
		{
			if (i==0) a[i][j]=j;
			else if (j==0) a[i][j]=i;
			else if (x[i-1]==y[j-1]) a[i][j]=a[i-1][j-1];
			else
			{
				if (a[i-1][j]<=a[i-1][j-1] && a[i-1][j]<=a[i][j-1]) a[i][j]=a[i-1][j]+1;
				else if (a[i][j-1]<=a[i-1][j-1] && a[i][j-1]<=a[i-1][j]) a[i][j]=a[i][j-1]+1;
				else a[i][j]=a[i-1][j-1]+1;
			}
		}
	}
	return a[n][m];
}
