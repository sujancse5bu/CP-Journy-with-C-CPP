#include<stdio.h>
int main()
{
	int a,i,j;
	char h;
	float x[12][12],s=0.0;
	scanf("%d %c",&a,&h);
	for (i=0; i<12; i++)
	{
		for (j=0; j<12; j++)
		{
			scanf("%f",&x[i][j]);
		}
	}
	for (j=0;j<12; j++)
	{
		s=s+x[j][a];
	}
	if (h=='S')
	{
		printf("%0.1f\n",s);
	}
	else if (h=='M')
	{
		printf("%0.1f\n",s/12.0);
	}
	return 0;
}