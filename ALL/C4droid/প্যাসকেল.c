#include<stdio.h>
int pscl(int a, int b, int i, int j, int k, long long int x,long long int y)
{
	x=1;
	y=1;
	a=b;
	for (j=a,k=1;j<i,k<i;a--,k++, j--)
	{
		x=x*a;
		y=y*k;
	}
	return x/y;
}
int main()
{
	int a,b,i,j,k;
	long long int x,y,z;
	scanf("%d",&a);
	b=a;
	for (i=1; i<b+1; i++)
	{
		z=pscl(a,b,i,j,k,x,y);
		printf("%d ",z);
	}
	printf("1\n");
	return 0;
}