#include<stdio.h>
int main()
{
	int i,n,x,y,z,v;
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf("%d %d",&x,&y);
		if (x>y){v=x;x=y;y=v;}
		while (1)
		{
			z=y%x;
			if (z==0) break;
			y=x;
			x=z;
		}
		printf("%d\n",x);
	}
	return 0;
}