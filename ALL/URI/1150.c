#include<stdio.h>
int main()
{
	int a,b,x,h;
	scanf("%d%d",&a,&b);
	while (b<=a)
	{
		scanf("%d",&b);
	}
	for (x=0,h=0; a<b; a++)
	{
		h++;
		x=x+a;
		if (x>b) break;
	}
	printf("%d\n",h);
	return 0;
}