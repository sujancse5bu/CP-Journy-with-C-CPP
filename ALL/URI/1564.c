#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d",&a)==1)
	{
		if (a<=100 && a>=0)
		{
			if (a==0) printf("vai ter copa!\n");
			else printf("vai ter duas!\n");
		}
	}
	return 0;
}