#include<stdio.h>
int main()
{
	int i,a,c;
	long int b,x=0;
	scanf("%d%ld%d",&a,&b,&c);
	for (i=1;i<=c;i++)
	{
		x=x+i*a;
	}
	if (x>b) printf("%ld\n",x-b);
	else printf("0\n");
	return 0;
}