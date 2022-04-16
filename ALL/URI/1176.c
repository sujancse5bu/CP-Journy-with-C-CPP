#include<stdio.h>
int main()
{
	int a,b,c;
	long long int x[61];
	x[0]=0;
	x[1]=1;
	for (c=2; c<61; c++)
	{
		x[c]=x[c-1]+x[c-2];
	}
	scanf("%d",&a);
	for (c=0; c<a; c++)
	{
		scanf("%d",&b);
		printf("Fib(%d) = %lld\n",b,x[b]);
	}
	return 0;
}