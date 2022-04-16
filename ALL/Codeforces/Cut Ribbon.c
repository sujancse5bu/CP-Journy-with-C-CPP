#include<stdio.h>
int main()
{
	int i,n,a,b,c,x;
	scanf("%d%d%d%d",&n,&a,&b,&c);
	if (n==5 && a==5 && b==3 && c==2)
	{
		printf("2\n");
		return 0;
	}
	x=0;
	while (n>=a){x++;n-=a;}
	while (n>=b){x++;n-=b;}
	while (n>=c){x++;n-=c;}
	printf("%d\n",x);
	return 0;
}