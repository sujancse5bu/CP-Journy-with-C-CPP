#include<stdio.h>
int main()
{
	int v,t,i;
	for (i=0;i<1000;i++)
	{
		scanf("%d%d",&v,&t);
		printf("%d\n",2*v*t);
	}
	return 0;
}