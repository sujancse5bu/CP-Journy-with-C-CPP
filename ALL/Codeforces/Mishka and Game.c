#include<stdio.h>
int main()
{
	int n,a,b,x,y,i;
	i=x=y=0;
	scanf("%d",&n);
	for (;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if (a>b) x++;
		else if (b>a) y++;
	}
	if (x>y) printf("Mishka\n");
	else if (y>x) printf("Chris\n");
	else printf("Friendship is magic!^^\n");
	return 0;
}