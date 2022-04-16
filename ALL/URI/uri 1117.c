#include<stdio.h>
int main()
{
	float a,x=0.0;
	int b=0;
	while (1)
	{
		scanf("%f",&a);
		if (a<0.0 || a>10.0)
		{
			printf ("nota invalida\n");
		}
		else 
		{
			b++;
			x=x+a;
				if (b==2)
				{
					x=x/2.0;
					printf("media = %0.2f\n",x);
					break;
				}
		}
	}
	return 0;
}