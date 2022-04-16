#include<stdio.h>
int main()
{
	int i=1,n,s=0;
	scanf("%d",&n);
	while (1)
	{
		s+=(i*(i+1))/2;
		if (s>n) break;
		i++;
	}
	printf("%d\n",i-1);
	return 0;
}