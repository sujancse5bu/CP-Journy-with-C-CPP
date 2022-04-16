#include<stdio.h>
int main()
{
	int i,a[10];
	for (i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
		if (a[i]>0) printf("X[%d] = %d\n",i,a[i]);
		else printf("X[%d] = 1\n",i);
	}
	return 0;
}