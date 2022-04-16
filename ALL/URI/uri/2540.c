#include<stdio.h>
int main()
{
	int i,n,b;
	float s,x;
	while (scanf("%d",&n)==1)
	{
		s=0.0;
		for (i=0; i<n; i++)
		{
			scanf("%d",&b);
			if (b==1) s++;
		}
		x=(n*2.0)/3.0;
		if (s>=x) printf("impeachment\n");
		else printf("acusacao arquivada\n");
	}
	return 0;
}