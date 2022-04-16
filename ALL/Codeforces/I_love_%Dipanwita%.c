#include<stdio.h>
int main()
{
	int i,n,x,s,t,p=0;
	scanf("%d",&n);
	scanf("%d",&x);
	s=x;
	t=x;
	i=1;
	while (i<n)
	{
		scanf("%d",&x);
		if (x>s) 
		{
			p++;
			s=x;
		}
		else if (t>x)
		{
			p++;
			t=x;
		}
		i++;
	}
	printf("%d\n",p);
	return 0;
}