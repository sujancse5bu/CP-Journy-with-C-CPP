#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	for (b=2; b<=a && a<2000; b=b+2)
	{
		c=b*b;
		printf("%d^2 = %d\n",b,c);
	}
	return 0;
}