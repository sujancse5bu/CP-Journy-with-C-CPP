#include<stdio.h>
int main()
{
	int n,i,a,b,x=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if (b-a>=2) x++;
	}
	printf("%d\n",x);
	return 0;
}