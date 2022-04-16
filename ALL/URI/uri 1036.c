#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,p,x,y;
	scanf("%lf %lf %lf",&a,&b,&c);
	p=b*b-4*a*c;
	if (a!=0 && p>=0)
	{
		x=(b*(-1)+sqrt(p))/(a*2.0);
		y=(b*(-1)-sqrt(p))/(a*2.0);
		printf("R1 = %0.5lf\nR2 = %0.5lf\n",x,y);
	}
	else printf("Impossivel calcular\n");
	return 0;
}