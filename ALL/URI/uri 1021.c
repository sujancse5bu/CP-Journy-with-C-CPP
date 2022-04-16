#include<stdio.h>
int main()
{
	double z;
	int a,b,c,d,e,f,m,n,o,p,q,r;
	scanf("%lf",&z);
	a=z/100;
	z=z-(a*100);
	b=z/50;
	z=z-(b*50);
	c=z/20;
	z=z-(c*20);
	d=z/10;
	z=z-(d*10);
	e=z/5;
	z=z-(e*5);
	f=z/2;
	z=z-(f*2);
	m=z/1;
	z=z-m;
	n=z*2.0;
	z=z-(n/2.0);
	o=z*4.0;
	z=z-(o/4.0);
	p=z*10.0;
	z=z-(p/10.0);
	q=z*20.0;
	z=z-(q/20.0);
	r=z*100.0;
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",a,b,c,d,e,f,m,n,o,p,q,r);
	return 0;
}