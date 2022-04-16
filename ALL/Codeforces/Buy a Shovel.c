#include<stdio.h>
int main()
{
	int i,a,b,x;
	scanf("%d%d",&a,&b);
	i=1;
	while (1)
	{
		x=a*i;
		if (x%10==0 || x%10==b) break;
		i++;
	}
	printf("%d\n",i);
	return 0;
}