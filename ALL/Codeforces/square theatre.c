#include<stdio.h>
int main()
{
	long long int m,n,x,y,z,a;
	scanf("%lld%lld%lld",&n,&m,&a);
	while (n>=1 && m>0 && a>0 && a<= 1000000000)
	{
		x=m/a;
		y=n/a;
		if (m%a) x=x+1;
		if (n%a) y=y+1;
		z=x*y;
		printf("%lld\n",z);
		break;
	}
	return 0;
}