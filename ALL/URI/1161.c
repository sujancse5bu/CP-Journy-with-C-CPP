#include<stdio.h>
int main()
{
	int i,n,m;long long int s,t;
	while (scanf("%d%d",&m,&n)==2)
	{
		s=1;t=1;
		if (n==0 && m!=0)
		{
			for (i=1;i<=m;i++) s=s*i;
		}
		else if (m==0 && n!=0)
		{
			for (i=1;i<=n;i++) t=t*i;
		}
		else if (m!=0 && n!=0)
		{
			for (i=1;i<=m;i++) s=s*i;
			for (i=1;i<=n;i++) t=t*i;
		}
		printf("%lld\n",s+t);
	}
	return 0;
}