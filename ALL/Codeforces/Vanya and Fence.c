#include<stdio.h>
int main()
{
	int i,x,y,n,s=0;
	scanf("%d%d",&x,&y);
	for (i=0; i<x; i++)
	{
		scanf("%d",&n);
		if (n>y) s=s+2;
		else s=s+1;
	}
	printf("%d\n",s);
	return 0;
}