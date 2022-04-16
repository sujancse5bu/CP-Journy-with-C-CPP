#include<stdio.h>
int main()
{
	int i,k,n,m,p;
	float a;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m>=60)
		{
			a=360*1.0/(180-m)*1.0;
			p=a;
			if (a-p>0.000000) printf("NO\n");
			else printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}