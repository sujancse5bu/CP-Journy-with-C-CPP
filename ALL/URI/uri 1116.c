#include<stdio.h>
int main()
{
	int x,y,n,i;
	float z;
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf("%d%d",&x,&y);
		if (y==0) printf("divisao impossivel\n");
		else 
		{
			z=x*1.0/y;
			printf("%0.1f\n",z);
		}
	}
	return 0;
}
		