#include<stdio.h>
int main()
{
	int i,j,n,p;
	float x;
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf("%f",&x);
		p=x;
		for (j=0;p>0;j++) 
		{
			p=p/2;
		}
		printf("%d dias\n",j);
	}
	return 0;
}