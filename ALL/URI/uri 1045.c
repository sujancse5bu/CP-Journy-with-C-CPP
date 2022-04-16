#include<stdio.h>
int main()
{
	double a,b,c,x,y,z,p,n,o;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>=b && a>=c)
	{
		n=a;
		o=b;
		p=c;
	}
	else if (b>=a && b>=c)
	{
		n=b;
		o=a;
		p=c;
	}
	else 
	{
		n=c;
		o=a;
		p=b;
	}
	x=n*n;
	y=o*o+p*p;
	if (n>=o+p) printf("NAO FORMA TRIANGULO\n");
	else if (x==y) printf("TRIANGULO RETANGULO\n");
	else if (x>y) printf("TRIANGULO OBTUSANGULO\n");
	else printf("TRIANGULO ACUTANGULO\n");
	if (a==b && b==c) printf("TRIANGULO EQUILATERO\n");
	else if (a==b || b==a || c==a) printf("TRIANGULO ISOSCELES\n");
	return 0;
}