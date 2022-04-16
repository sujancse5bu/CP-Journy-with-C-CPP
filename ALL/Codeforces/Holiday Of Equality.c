#include<stdio.h>
int main()
{
	int i,n,m,s,a[102];
	m=0;s=0;
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
		if (a[i]>m) m=a[i];
	}
	for (i=0;i<n;i++) s+=(m-a[i]);
	printf("%d\n",s);
	return 0;
}