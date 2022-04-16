#include<stdio.h>
int main()
{
	long long int i,x,y,z,v;
	scanf("%lld %lld",&x,&y);
	if (x>y)
	{
		v=x;
		x=y;
		y=v;
	}
	while (1)
	{
		z=y%x;
		if (z==0) break;
		y=x;
		x=z;
	}
	printf("%lld\n",x);
	return 0;
}
