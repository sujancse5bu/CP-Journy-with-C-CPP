#include<stdio.h>
int main()
{
	int a,b,c,s,x=0;
	scanf("%d %d %d",&a,&b,&c);
	s=a+b*c;
	if (s>x) x=s;
	s=a*b*c;
	if (s>x) x=s;
	s=a*(b+c);
	if (s>x) x=s;
	s=(a+b)*c;
	if (s>x) x=s;
	s=a+b+c;
	if (s>x) x=s;
	printf("%d\n",x);
	return 0;
}