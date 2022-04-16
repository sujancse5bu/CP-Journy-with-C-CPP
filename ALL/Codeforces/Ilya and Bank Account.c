#include<stdio.h>
int main()
{
	long int i,o,n,da,dd;
	scanf("%d",&n);
	if (n<0)
	{
		da=n%10;
		n/=10;
		dd=n%10;
		n*=10;
		if (da<dd) n/=10;
		else 
		{
			n/=100;
			n*=10;
			n+=da;
		}
	}
	printf("%d\n",n);
	return 0;
}