#include<stdio.h>
int gcd ( int x, int y)
{
	int v,z;
	if (x>y){v=x;x=y;y=v;}
	while (1)
	{
		z=y%x;
		if (z==0) break;
		y=x;
		x=z;
	}
	return x;
}
int main()
{
	int s,a,h,g,x,y,z,i=0;
	scanf("%d%d%d",&s,&a,&h);
	while (1)
	{
		if (i%2==0)
		{
			if (h==0)
			{
				printf("1\n");
				return 0;
			}
			h-=gcd(s,h);
		}
		else 
		{
			if (h==0)
			{
				printf("0\n");
				return 0;
			}
			h-=gcd(a,h);
		}
		i++;
	}
	return 0;
}