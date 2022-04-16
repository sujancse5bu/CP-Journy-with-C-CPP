#include<stdio.h>
int main()
{
	int i,j,m,n,s=0;
	char b;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("\n%c",&b);
			if (b=='C' || b=='M' || b=='Y') 	s=1;
		}
	}
	if (s==1) printf("#Color\n");
	else printf("#Black&White\n");
	return 0;
}