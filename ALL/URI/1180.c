#include<stdio.h>
int main()
{
	int m,i,d,n,a[1000]={0};
	scanf("%d",&n);
	scanf("%d",&a[0]);
	m=a[0];
	for (i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if (m>a[i])
		{
			m=a[i];
			d=i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n", m,d);
	return 0;
}
		