#include<stdio.h>
int main()
{
	int n,a,b,o;
	float x,y;
	y=0.0;
	while (scanf("%d",&n)==1)
	{
		for (o=0; o<n; o++)
		{
			scanf("%d%d",&a,&b);
			x=b*1.0/a;
			if (x>y)
			{
				printf("%d\n",o+1);
				y=x;
			}
		}
	}
	return 0;
}