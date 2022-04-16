#include<stdio.h>
int main()
{
	int i,j,a,b,c,x,y=0;
	scanf("%d",&i);
	if (i>0 && i<=1000)
	{
		for (j=0; j<i; j++)
		{
			scanf("%d %d %d",&a,&b,&c);
			if ((a==1 || a==0) && (b==1 || b==0) && (c==1 || c==0))
			{
				x=a+b+c;
				if (x>=2) y++;
			}
		}
		printf("%d\n",y);
	}
	return 0;
}