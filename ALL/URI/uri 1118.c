#include<stdio.h>
int main()
{
	double a,x=0.0;
	int p,b=0;
	while (1)
	{
		scanf("%lf",&a);
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
				b=0;
				x=x/2.0;
				printf("media = %0.2lf\n",x);
				x=0.0;
				while (1)
				{
					scanf("%d",&p);
					printf("novo calculo (1-sim 2-nao)\n");
					if (p<1 || p>2) 
					{
						printf("novo calculo (1-sim 2-nao)\n");
					}
					else break;
				}
			}
		}
		if (p==2) break;
	}
	return 0;
}