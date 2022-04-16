#include<stdio.h>
int main()
{
	long int i,j,s,a,x;
	scanf("%ld %ld",&a,&x);
	if (a>x) a=x;
	if (a==x) s=1;
	else s=0;
	if (x==1)
	{
		printf("1\n");
		return 0;
	}
	for (i=2; i<=a; i++)
	{
		if (x%i==0) s++;
	}
	printf("%ld\n",s);
	return 0;
}