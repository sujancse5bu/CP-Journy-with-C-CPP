#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,p=0;
	int q=0;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if (a>0) 
	{
		p=a;
		q=1;
	}
	if (b>0)
	{
		p=p+b;
		q=q+1;
	}
	if (c>0)
	{
		p=p+c;
		q=q+1;
	}
	if (d>0)
	{
		p=p+d;
		q=q+1;
	}
	if (e>0)
	{
		p=p+e;
		q=q+1;
	}
	if (f>0)
	{
		p=p+f;
		q=q+1;
	}
	p=p/q;
	printf("%d valores positivos\n%0.1f\n",q,p);
	return 0;
}