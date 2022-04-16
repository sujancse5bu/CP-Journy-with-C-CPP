#include<stdio.h>
int main()
{
	int i,l;
	scanf("%d",&l);
	if (l%2==0)
	{
		l=l+1;
	}
	for (i=1; i<=6; i++)
	{
		printf("%d\n",l);
		l=l+2;
	}
	return 0;
}