#include<stdio.h>
int main()
{
	float i,s=0.0;
	for (i=1.0; i<=100.0; i++)
	{
		s=s+1.0/i;
	}
	printf("%0.2f\n",s);
	return 0;
}