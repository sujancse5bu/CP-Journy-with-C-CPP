#include<stdio.h>
int main()
{
	int i,h,l,hi,li,a,b[120];
	scanf("%d",&a);
	h=0;
	l=200;
	for (i=0; i<a; i++)
	{
		scanf("%d",&b[i]);
		if (b[i]>h)
		{
			h=b[i];
			hi=i;
		}
		if (b[i]<l)
		{
			l=b[i];
			li=i;
		}
	}
	li=a-li-2;
	hi=hi-1;
	printf("%d\n",hi+li);
}