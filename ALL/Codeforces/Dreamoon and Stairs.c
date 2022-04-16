#include<stdio.h>
int main()
{
	int n,d,l=3,m,i;
	scanf("%d%d",&n,&m);
	d=n/2;
	if (n%2==1) d++;
	for (i=d;i<=n;i++)
	{
		if (i%m==0)
		{
			l=10;break;
		}
	}
	if (l==3) printf("-1\n");
	else printf("%d\n",i);
	return 0;
}