#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if (a<b) {c=a;a=b;b=c;}
	printf("%d %d\n",b,(a-b)/2);
	return 0;
}