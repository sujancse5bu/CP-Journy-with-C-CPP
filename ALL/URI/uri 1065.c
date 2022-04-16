#include<stdio.h>
int main()
{
	int a,b,c,d,e,f=0;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a%2==0) f=1;
	if (b%2==0) f=f+1;
	if (c%2==0) f=f+1;
	if (d%2==0) f=f+1;
	if (e%2==0) f=f+1;
	printf("%d valores pares\n",f);
	return 0;
}