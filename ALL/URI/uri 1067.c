#include<stdio.h>
int main()
{
	int i,x;
	scanf("%d",&x);
	for (i=1; i<=x; i=i+2)
	{
		printf("%d\n",i);
	}
	return 0;
}