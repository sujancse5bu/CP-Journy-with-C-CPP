#include<stdio.h>
int main()
{
	int a,i;
	while (1)
	{
		scanf("%d",&a);
		if (a==0) break;
		else
		{
			for (i=1; i<=a; i++)
			{
				if (i<a) printf("%d ",i);
				else if (i==a) printf("%d\n",i);
			}
		}
	}
	return 0;
}