#include<stdio.h>
int main()
{
	int i,n,x,y,s,t;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		s=0;
		t=0;
		scanf("%d%d",&x,&y);
		if (x>y && (y+1)!=x)
		{
			y=y+1;
			while (x>y)
			{
				if (y%2==1) s=s+y;
				y++;
			}
			printf("%d\n",s);
		}
		else if (x<y && (x+1)!=y)
		{
			x=x+1;
			while (y>x)
			{
				if (x%2==1) t=t+x;
				x++;
			}
			printf("%d\n",t);
		}
		else printf("0\n");
	}
	return 0;
}