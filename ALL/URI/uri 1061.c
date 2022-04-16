#include<stdio.h>
int main()
{
	char b,a[10];
	int c,d,l,m,n,x,y,z,f,g,h,i;
	scanf("%s %d",&a,&c);
	scanf("%d %s %d %s %d",&l,&b,&m,&b,&n);
	scanf("%s %d",&a,&d);
	scanf("%d %s %d %s %d",&x,&b,&y,&b,&z);
	if (z<n)
	{
		z=z+60;
		y--;
	}
	f=z-n;
	if (y<m)
	{
		y=y+60;
		x--;
	}
	g=y-m;
	if (x<l)
	{
		x=x+24;
		d--;
	}
	h=x-l;
	if (d>=c && d<=30)
	{
		i=d-c;
		printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",i,h,g,f);
	}
	return 0;
}