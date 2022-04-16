#include<stdio.h>
int main()
{
	int i,s,n,x[120];
	scanf("%d",&n);
	for (i=0; i<n; i++) scanf("%d",&x[i]);
	if (x[0]%2==0 && x[1]%2==0 || x[2]%2==0)
	{
		for (i=0; i<n; i++)
		{
			if (x[i]%2==1) {s=i+1;break;}
		}
	}
	else
	{
		for (i=0; i<n; i++)
		{
			if (x[i]%2==0) {s=i+1;break;}
		}
	}
	printf("%d\n",s);
	return 0;
}