#include<stdio.h>
int main()
{
	int i,n,m;
	char x[30],a[30][30],b[30][30];
	while (scanf("%d",&n)==1)
	{
		for (i=0; i<n; i++)
		{
			scanf("%s %d",&x,&m);
			a[0][30]=x;
		}
		printf("%s\n",a);
	}
}