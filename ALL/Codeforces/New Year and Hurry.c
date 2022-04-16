#include<stdio.h>
int main()
{
	int i,a,x,s=0;
	scanf("%d%d",&a,&x);
	x=240-x;
	for (i=0; i<=a; i++)
	{
		s+=i*5;
		if (s>x) break;
	}
	printf("%d\n",i-1);
	return 0;
}