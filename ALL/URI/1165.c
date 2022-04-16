#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,i,x,j,o;
	scanf("%d",&x);
	for (j=0; j<x; j++)
	{
		scanf("%d",&n);
		o=sqrt(n);
		for (d=2; d<=o; d++)
		{
			i=n%d;
			if (i==0)
			{
				break;
			}
		}
		if (i==0) printf("%d nao eh primo\n",n);
		else printf("%d eh primo\n",n);
	}
	return 0;
}