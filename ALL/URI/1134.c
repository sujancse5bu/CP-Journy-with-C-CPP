#include<stdio.h>
int main()
{
	int s,a,g,d;
	a=0;
	g=0;
	d=0;
	while (scanf("%d",&s)==1)
	{
		if (s==4) break;
		else if (s==1) a++;
		else if (s==2) g++;
		else if (s==3) d++;
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
	return 0;
}