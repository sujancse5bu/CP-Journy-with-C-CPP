/*lo sa gu*/
#include <stdio.h>
int main()
{
	int a,b,c,x,y,z=1;
	scanf("%d %d",&a,&b);
	for (c=2; c!=a && c!=b ; c++)
	{
		x=a%c;
		y=b%c;
		if (y==0 && x==0)
		{
			a=a/c;
			b=b/c;
			z=z*c;
		}
	}
	z=a*b;
	printf("%d",z);
	return 0;
}