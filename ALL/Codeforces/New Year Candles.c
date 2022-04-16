#include<stdio.h>
int main()
{
	int a,b,x,f;
	scanf("%d%d",&a,&b);
	x=a;
	while (a>0)
	{
	    f=a%b;
		a=a/b;
		x=x+a;
	}
	printf("%d\n",x);
	return 0;
}
