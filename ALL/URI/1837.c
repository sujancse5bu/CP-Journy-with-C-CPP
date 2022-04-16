#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (a>=-1000 && a<1000 && b>=-1000 && b<1000)
	{
		if (a<0 && b<0)
		{
			a=abs(a);
			b=abs(b);
			printf("%d %d\n",a/b,a%b);
		}
		else if (a<0 && b>0) printf("%d %d\n",a/b-1,a%b+b);
		else printf("%d %d\n",a/b,a%b);
	}
	return 0;
}