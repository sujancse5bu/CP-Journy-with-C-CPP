#include<stdio.h>
int main()
{
	int a,b,s;
	while (1)
	{
		s=0;
		scanf("%d%d",&a,&b);
		if (a<=0 || b<=0) break;
		else if (a>b)
		{
			for (b; b<=a; b++)
			{
				printf("%d ",b);
				s=s+b;
			}
			printf("Sum=%d\n",s);
		}
		else if (a<b)
		{
			for (a; a<=b; a++)
			{
				printf("%d ",a);
				s=s+a;
			}
			printf("Sum=%d\n",s);
		}
		else 
		{
			printf("%d Sum=%d\n",a,b);
		}
	}
	return 0;
}