#include<stdio.h>
#include<math.h>
int main()
{
	long long int n;
	int d,k,i,p;
	scanf("%d",&p);
	for (k=0; k<p; k++)
	{
		scanf("%d",&n);
		n=sqrt(n);
		for (d=2; d<n; d++)
		{
			i=n%d;
			if (i==0) break;
		}
		if (i==0) printf("Not prime\n");
		else printf("Yes\n");
	}
	return 0;
}