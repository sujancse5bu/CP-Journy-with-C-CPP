#include<stdio.h>
int main()
{
	int i,j;
	printf("Please enter a number :");
	scanf("%d",&j);
	for (i=1; i<=j; i++)
	{
		if (j%i==0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}