#include <stdio.h>
int a[1000];
void Insertion (int n);
int main ()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	Insertion (n);
	for (i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void Insertion (int n)
{
	int i,j,k;
	for (i,j=1;j<n;j++)
	{
		k=a[j];
		i=j-1;
		while (i>=0 && a[i]>k)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=k;
	}
}
