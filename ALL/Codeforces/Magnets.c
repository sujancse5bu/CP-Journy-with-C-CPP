#include<stdio.h>
int main()
{
	int i,a,x,y=0,s=0;
	scanf("%d",&a);
	for (i=0;i<a;i++)
	{
		scanf("%d",&x);
		if (x!=y) s++;
		y=x;
	}
	if (a==1) printf("1\n");
	else printf("%d\n",s);
	return 0;
}