#include<stdio.h>
#include<math.h>
long long int prm (long long int x)
{
	long long int i,v,d,c=0;
	if (x>300) v=sqrt (x);
	else v=x;
	for (i=2;i<v;i++)
	{
		d=x%i;
		if (d==0) c++;
		if (c>1) break;
	}
	return c;
}
int main()
{
	long long int i,n,x,y;
	scanf("%lld",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lld",&x);
		y= prm (x);
		if (y==1) printf("YES\n");
		else printf("NO\n");
		
	}
	return 0;
}