#include<stdio.h>
int main()
{
	int n,i,j,k,s;
	scanf("%d",&n);
	for (k=0;k<n; k++)
	{
		scanf("%d",&j);
		s=0;
		for (i=1; i<=j/2; i++)
		{
			if (j%i==0)
			{
				s+=i;
			}
		}
		if (j==s) printf("%d eh perfeito\n",j);
		else printf("%d nao eh perfeito\n",j);
	}
	return 0;
}