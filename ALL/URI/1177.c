#include<stdio.h>
int main()
{
	int i,j,x,a[1000];
	scanf("%d",&x);
	for (i=0,j=0;i<1000;i++,j++)
	{
		a[i]=j;
		printf("N[%d] = %d\n",i,a[i]);
		if (j==(x-1)) j=-1;
	}
	return 0;
}