#include<stdio.h>
int main()
{
	int a,b;
	scanf ("%d%d",&a,&b);
	if (a<=0 || b<=0) printf("-1 -1\n");
	else
	{
		int i,j,x,z=0,s=0;
		if (a>b){x=b;b=a;a=x;}
		for (i=a;i<=b;i++)
		{
			x=i;
			for (i=10;x>0;x=x/i) s+=x%i;
			