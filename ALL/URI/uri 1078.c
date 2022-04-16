#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	if (a>2 && a<1000)
	{
		for (b=1; b<11; b++)
		{
			c=a*b;
			printf("%d x %d = %d\n",b,a,c);
		}
	}
	return 0;
}