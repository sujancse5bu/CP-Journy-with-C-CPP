#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	for (b=1;a>0; a--)
	{
		b=b*a;
	}
	printf("%d\n",b);
	return 0;
}