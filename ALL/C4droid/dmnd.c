#include<stdio.h>
int main()
{
	int i,j,x;
	scanf("%d",&x);
	for (i=0; i<x; i++)
	{
		for (j=0; j<x; j++)
		{
			printf(" ");
			if (i+j==x/2|| i+j==(x-1)+x/2 || i==j+x/2|| j==i+x/2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}