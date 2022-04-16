#include<stdio.h>
int main()
{
	int x,y,p,s,a=0,b=0;
	scanf("%d%d",&x,&y);
	if (x>=1 && x<=y && y<=16)
	{
		p=x*y;
		while (p>a)
		{
			a=a+2;
			if (a<=p) b++;
		}
		printf("%d\n",b);
	}
	return 0;
}