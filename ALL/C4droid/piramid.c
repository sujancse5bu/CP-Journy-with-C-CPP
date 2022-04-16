#include<stdio.h>
int main()
{
	int a,b;
	for (a=5,b=1; a>0, b<=5 ; a--, b++)
	{
		if (a)
		{
			printf("  ");
		}
		if (b)
		{
			printf("* ");
		}
	}
	return 0;
}