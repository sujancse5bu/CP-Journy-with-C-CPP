#include<stdio.h>
int main()
{
	float x,y,z;
	char a[100];
	scanf("%s %f %f",&a,&x,&y);
	z=y*15/100.0;
	z=z+x;
	printf("TOTAL = R$ %0.2f\n",z);
	return 0;
}