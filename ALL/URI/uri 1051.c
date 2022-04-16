#include<stdio.h>
int main()
{
	float a,x;
	scanf("%f",&a);
	if (a<=2000.00) printf("Isento\n");
	else if (a>=2000.01 && a<=3000.00)
	{
		x=a-2000.00;
		x=x*0.08;
		printf("R$ %0.2f\n",x);
	}
	else if (a>=3000.01 && a<=4500.00)
	{
		x=a-3000.0;
		x=x*0.18+80.0;
		printf("R$ %0.2f\n",x);
	}
	else 
	{
		x=a-4500.0;
		x=x*0.28+1500*0.18+80.0;
		printf("R$ %0.2f\n",x);
	}
	return 0;
}