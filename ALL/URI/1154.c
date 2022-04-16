#include<stdio.h>
int main()
{
	int a,b=0;
	float e,c=0;
	while (scanf("%d",&a)==1)
	{
		if (a<0) break;
		b++;
		c=c+a;
	}
	e=c/b*1.0;
	printf("%0.2f\n",e);
	return 0;
}