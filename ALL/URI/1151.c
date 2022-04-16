#include<stdio.h>
int main()
{
	int a,c,x[46];
	scanf("%d",&a);
	x[0]=0;
	x[1]=1;
	for (c=2; c<a; c++)
	{
		x[c]=x[c-1]+x[c-2];
	}
	for (c=0; c<a; c++)
	{
		if (c!=(a-1)) printf("%d ",x[c]);
		else printf("%d\n",x[c]);
	}
	return 0;
}