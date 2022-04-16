#include<stdio.h>
int main()
{
	int i,j,k;
	char h;
	double x[12][12],s=0.0;
	scanf("%c",&h);
	for (i=0; i<12; i++)
	{
		for (j=0; j<12; j++)
		{
			scanf("%lf",&x[i][j]);
			k=i+j;
			if (i<j && k>11)
			{
				s=s+x[i][j];
			}
		}
	}
	if (h=='S')
	{
		printf("%0.1lf\n",s);
	}
	else if (h=='M')
	{
		printf("%0.1lf\n",s/30.0);
	}
	return 0;
}