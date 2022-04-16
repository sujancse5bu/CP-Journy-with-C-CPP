#include<stdio.h>
int main()
{
	int x,z,a,b,c,d,e,f;
	scanf("%d",&x);
	z=x;
	a=z/100;
	z=z%100;
	b=z/50;
	z=z%50;
	c=z/20;
	z=z%20;
	d=z/10;
	z=z%10;
	e=z/5;
	z=z%5;
	f=z/2;
	z=z%2;
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n" ,x,a,b,c,d,e,f,z);
	return 0;
}