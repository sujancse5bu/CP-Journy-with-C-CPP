#include<stdio.h>
int main()
{
	int a,n,i,b=2,j,k,l;
	scanf("%d",&a);
	a+=1;
	while (1)
	{
		n=a;
		i=a/1000;
		a=a%1000;
		j=a/100;
		a=a%100;
		k=a/10;
		l=a%10;
		if (i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
		{
			b=8;break;
		}
		else
		{
			n+=1;
			a=n;
		}
	}
	if (b==8) printf("%d\n",n);
	return 0;
}