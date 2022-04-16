#include<stdio.h>
#include<math.h>
int main()
{
	int l,r,a,x,y,z;
	scanf("%d%d%d",&l,&r,&a);
	x=l-r;
	x=abs(x);
	y=a-x;
	z=(l+r+a)-y;
	printf("%d\n",z);
	return 0;
}
	