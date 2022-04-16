#include <stdio.h>
#include <string.h>
int a[1000][1000];
int EditDistance(char s1[],char s2[],int m,int n)
{
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0) a[i][j]=j;
			else if(j==0) a[i][j]=i;
			else if(s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1];
			else
			{
				if(a[i-1][j]<=a[i][j-1] && a[i-1][j]<=a[i-1][j-1]) a[i][j]=1+a[i-1][j];
				else if(a[i][j-1]<=a[i-1][j]&&a[i][j-1]<=a[i-1][j-1]) a[i][j]=1+a[i][j-1];
				else a[i][j]=1+a[i-1][j-1];
			}
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return a[m][n];
}
int main()
{
	int x;
    char s[10000],p[10000];
	gets(s);
	gets(p);
	x=EditDistance(s,p,strlen(s),strlen(p));
	printf("The Edit Distance is : %d\n",x);
}
