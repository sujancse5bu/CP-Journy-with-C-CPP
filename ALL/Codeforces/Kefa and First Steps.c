#include<stdio.h>
int main()
{
	long long int a,s,t,b,i,x,m;
	a=0;
	b=0;
	s=0;
	t=0;
	scanf("%lld",&x);
	for (i=0; i<x; i++)
	{
		scanf("%lld",&m);
		if (a<=m)
		{
			s=s+1;
			a=m;
		}
		else 
		{
			a=0;
			if (t<s) 
			{
				t=s;
				s=1;
			}
		}
	}
	if (s>t) printf("%lld\n",s);
	else printf("%lld\n",t);
	return 0;
}