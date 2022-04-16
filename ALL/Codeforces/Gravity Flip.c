#include<stdio.h>
int main()
{
	int i,n,o,l,a[102];
	scanf("%d",&n);
	o=2;
	for (i=0; i<n; i++) scanf("%d",&a[i]);
	while (o==2)
	{
		o=0;
		for (i=0; i<n-1; i++)
		{
			if (a[i]>a[i+1])
			{
				l=a[i];
				a[i]=a[i+1];
				a[i+1]=l;
				o=2;
			}
		}
	}
	for (i=0; i<n; i++) 
	{
		if (i!=n-1) printf("%d ",a[i]);
		else printf("%d\n",a[i]);
	}
	return 0;
}