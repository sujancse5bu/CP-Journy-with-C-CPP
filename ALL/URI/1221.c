#include<stdio.h>
#include<math.h>
int main()
{
	long long int n;
	int d,k,i,p,s;
	scanf("%d",&p);
	for (k=0; k<p; k++)
	{
		i=3;
		scanf("%lld",&n);
		s=sqrt(n);
		for (d=2; d<=s; d++)
		{
			i=n%d;
			if (i==0) break;
		}
		if (i==0) printf("Not Prime\n");
		else  printf("Prime\n");
	}
	return 0;
}