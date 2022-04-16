#include<stdio.h>
int main()
{
	int a,x,y,n,i,s;
	scanf("%d",&a);
	for (n=0; n<a;n++)
	{
		s=0;
		scanf("%d %d",&x,&y);
		if (x%2==0) x++;
		for (i=0; i<y; i++)
		{
			s=s+x;
			x=x+2;
		}
		printf("%d\n",s);
	}
	return 0;
}