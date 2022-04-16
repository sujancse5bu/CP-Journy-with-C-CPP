#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d", &a);
	c=10000;
	printf("2\n");
	for (b=1; a<c ; b++)
	{
		d=a*b+2;
		if (d>c) break;
		printf("%d\n",d);
	}
	return 0;
}