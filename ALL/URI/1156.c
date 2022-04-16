#include<stdio.h>
int main()
{
	float a,b,s=0.0;
	for (a=1.0,b=1.0;a<=39;a+=2,b=b*2.0)
	{
		s=s+a/b;
	}
	printf("%0.2f\n", s);
	return 0;
}