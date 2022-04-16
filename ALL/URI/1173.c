#include<stdio.h>
int main()
{
	int i,a,x[10];
	scanf("%d",&a);
	x[0]=a;
	printf("N[0] = %d\n",x[0]);
	for (i=1; i<10; i++)
	{
		x[i]=x[i-1]*2;
		printf("N[%d] = %d\n",i,x[i]);
	}
	return 0;
}