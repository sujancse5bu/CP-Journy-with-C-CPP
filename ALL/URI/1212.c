#include<stdio.h>
int main()
{
	int i,p,t,q,aa[20],bb[20];
	long long int a,b;
	while (scanf("%lld%lld",&a,&b)==2)
	{
		p=0;
		q=0;
		t=0;
		aa[20]=0;
		bb[20]=0;
		if (a==0 && b==0) break;
		while (a>0)
		{
			aa[p+1]=a%10;
			a=a/10;
			p++;
		}
		while (b>0)
		{
			bb[q+1]=b%10;
			b=b/10;
			q++;
		}
		p=p-1;
		q=q-1;
		if (q>p) q=p;
		for (i=q;i<0;i--)
		{
			if (aa[i]+bb[i]>9)
			{
				t++;
				aa[i-1]=aa[i-1]+1;
			}
		}
printf("%d\n",t);
	}
	return 0;
}