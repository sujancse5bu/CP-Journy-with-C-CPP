#include <stdio.h>
int main()
{
	int x,a,s;
	while(1)
	{
		scanf("%d", &x);
		s=0;
		if(x==0) break;
		else if(x%2==0)
		{
			for(a=x; a<=x+8; a+=2) s+=a;
		}
		else
		{
			for(a=x+1;a<=x+9;a+=2) s+=a;
		}
		printf("%d\n", s);
	}
	return 0;
}