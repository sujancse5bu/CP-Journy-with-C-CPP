#include<stdio.h>
int main()
{
	int i,j,s=0;
	scanf("%d%d",&j,&i);
	if (j%2==0) j=j-1;
	else j=j-2;
	for (j; j>i ; j=j-2)
	{
		s=s+j;
	}
	printf("%d\n",s);
	return 0;
}