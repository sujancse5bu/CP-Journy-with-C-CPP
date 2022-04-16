#include<stdio.h>
int main()
{
	int f,g,a,x,y,z,all;
	float cp,rp,sp;
	char w;
	x=0;
	y=0;
	z=0;
	scanf("%d",&f);
	for (g=0;g<f; g++)
	{
		scanf("%d %c",&a,&w);
		if (a>=1 && a<=15)
		{
			if (w=='C') x=x+a;
			else if (w=='R') y=y+a;
			else if (w=='S') z=z+a;
		}
	}
	all=x+y+z;
	cp=(x*100.0)/all;
	rp=(y*100.0)/all;
	sp=(z*100.0)/all;
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %0.2f %%\nPercentual de ratos: %0.2f %%\nPercentual de sapos: %0.2f %%\n",all,x,y,z,cp,rp,sp);
	return 0;
}