#include<stdio.h>
int main()
{
	int I,J=7,k;
	for (I=1; I<=9; I=I+2,J=J+5)
	{
		for (J,k=1; k<=3; J--,k++)
		{
			printf("I=%d J=%d\n",I,J);
		}
	}
	return 0;
}