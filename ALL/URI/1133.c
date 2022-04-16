#include<stdio.h>
int main()
{
	int a,b,x,y,l,m;
	scanf("%d%d",&a,&b);
	if (a<b)
	{
		l=a;
		m=b;
	}
	else if (b<a)
	{
		m=a;
		l=b;
	}
	for (l+=1;l<m;l++)
	{
		x=l%5;
		if (x==2 || x==3 && l<m) printf("%d\n",l);
	}
	return 0;
}