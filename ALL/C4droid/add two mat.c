#include<stdio.h>
int main()
{
	int i,j,m,n,a[500][500],b[500][500];
	printf("Please enter the Row and Column of the these matrix:");
	scanf ("%d %d",&m,&n);
	printf("The first matrix:\n");
	for (i=0;i<m;i++) for (j=0; j<n;j++) scanf ("%d",&a[i][j]);
	for (i=0;i<m;i++) for (j=0; j<n;j++) printf ("%d",a[i][j]);
}