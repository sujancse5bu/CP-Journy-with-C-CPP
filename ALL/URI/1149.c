#include<stdio.h>
int main()
{
	int a,n,i,s;
	scanf("%d%d",&a,&n);
	while (n<=0)
	{
		scanf("%d",&n);
	}
	for (i=1,s=0; i<=n; i++,a++)
	{
		s=s+a;
	}
	printf("%d\n",s);
	return 0;
}