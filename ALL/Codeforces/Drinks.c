#include<stdio.h>
int main()
{
	int i,n,b,s=0;
	double x;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&b);
		s+=b;
	}
	x=s/(n*1.0);
	printf("%lf\n",x);
	return 0;
}