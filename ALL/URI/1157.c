#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d",&j);
	for (i=1; i<=j/2; i++)
	{
		if (j%i==0)
		{
			printf("%d\n", i);
		}
	}
	printf("%d\n",j);
	return 0;
}