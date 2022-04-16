#include<stdio.h>
int main()
{
	int a;
	float x,y,z,d;
	scanf("%d",&a);
	for (a; a>0; a--)
	{
		scanf("%f%f%f",&x,&y,&z);
		d=(x*2.0 + y*3.0 + z*5.0)/10.0;
		printf("%0.1f\n",d);
	}
	return 0;
}