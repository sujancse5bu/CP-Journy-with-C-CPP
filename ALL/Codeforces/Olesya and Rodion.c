#include<stdio.h>
int main()
{
	int i=0,a,b;
	scanf("%d%d",&a,&b);
	if (a==1 && b==10)
	{
		printf("-1\n");
		return 0;
	}
	if (b!=10)
	{
		while (i<a) 
		{
			printf("%d",b);
			i++;
		}
	}
	else
	{
		printf("1");
		i=1;
		while (i<a)
		{
			printf("0");
			i++;
		}
	}
	printf("\n");
	return 0;
}