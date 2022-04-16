#include<stdio.h>
int main()
{
	int i,j,a,b;
	scanf("%d%d",&a,&b);
	if (a%2==0 || a<3 || a>99)
	{
		printf("NO\n");
		return 0;
	}
	if (b<0 || b>2*(a-2) || b>(a-2))
	{
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<a;j++)
		{
			if (b==2 && j==1) 
			{
				if (i==1 || i==2)
				{
					printf("#");
					continue;
				}
			}
			else printf(".");
		}
		printf("\n");
	}
}