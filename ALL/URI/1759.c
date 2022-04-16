#include<stdio.h>
int main()
{
	long int a,j;
	scanf("%d",&a);
	for (j=1; j<=a; j++)
	{
		if (j!=a) printf("Ho ");
		else printf("Ho!\n");
	}
	return 0;
}