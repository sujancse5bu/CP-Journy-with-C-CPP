#include<stdio.h>
int main()
{
	int a,c;
	long int b;
	scanf("%d",&c);
	for (a=0;a<c && c<10000; a++)
	{
		scanf("%ld",&b);
		if (b>0)
		{
			if (b%2==0) printf("EVEN POSITIVE\n");
			else printf("ODD POSITIVE\n");
		}
		else if (b<0)
		{
			if (b%2==0) printf("EVEN NEGATIVE\n");
			else printf("ODD NEGATIVE\n");
		}
		else printf("NULL\n");
	}
	return 0;
}