#include<stdio.h>
int main()
{
	int a,b[100],c=0;
	for (a=0;a<100; a++)
	{
		scanf("%d",&b[a]);
		if (b[a]>c) c=b[a];
	}
	for (a=0; a<100; a++)
	{
		if (c==b[a]) break;
	}
	printf("%d\n%d\n",c,a+1);
	return 0;
}