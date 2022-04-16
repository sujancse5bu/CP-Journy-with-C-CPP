#include<stdio.h>
int main()
{
	int i,j,n;
	long int x,y;
	double p,q;
	scanf("%d",&n);
	if (n<=3000 && n>=1)
	{
		for (i=0; i<n; i++)
		{
			scanf("%ld %ld %lf %lf",&x,&y,&p,&q);
			if (x>=100 && x<=1000000 && y<=1000000 && y>=100 && x<y && p<=10.0 && p>=0.1 && q<=10.0 && q>=0.0 && q<p)
			{
				for (j=0;;j++)
				{
					x=x+p;
					y=y+q;
					if (j>100) 
					{
						printf("Mais de 1 seculo.\n");
						break;
					}
					if (x>y) 
					{
						printf("%d anos.\n",j);
						break;
					}
				}
			}
		}
	}
	return 0;
}