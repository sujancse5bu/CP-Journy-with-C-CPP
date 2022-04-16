#include<stdio.h>
int main()
{
	int a,i,x,y,z;
	z=0;
	y=0;
	x=0;
	scanf("%d",&a);
	for (i=0; i<a; i++,z++)
	{
		x=z+1;
		y=x+1;
		z=y+1;
		printf("%d %d %d PUM\n",x,y,z);
	}
	return 0;
}