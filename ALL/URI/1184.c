#include<stdio.h>
int main()
{
	int i,j;
	char h;
	float x[12][12],s=0.0,p=0.0;
	scanf("%c",&h);
	for (i=0; i<12; i++)
	{
		for (j=0; j<12; j++)
		{
			scanf("%f",&x[i][j]);
			if (j<i) 
			{
				s=s+x[i][j];
				p++;
			}
		}
	}
	if (h=='S')
	{
		printf("%0.1f\n",s);
	}
	else if (h=='M')
	{
		printf("%0.1f\n",s/p);
	}
	return 0;
}