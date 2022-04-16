#include<stdio.h>
int main()
{
	long int x,c;
	c=0;
	scanf("%ld",&x);
	while (x>0)
	{
		if (x%2==1) c++;
		x=x/2;
	}
	printf("%ld\n",c);
	return 0;
}