#include<stdio.h>
int main()
{
	int a,b,x=0,l,m;
	scanf("%d%d",&a,&b);
	if (a<b) 
	{
		l=a;
		m=b;
	}
	else 
	{
		m=a;
		l=b;
	}
	for (; l<=m; l++)
	{
		if (l%13!=0) x+=l;
	}
	printf("%d\n",x);
	return 0;
}