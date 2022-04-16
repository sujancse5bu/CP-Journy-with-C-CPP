#include<stdio.h>
int main()
{
	int n,i,j,x,m=0;
	char a[200];
	scanf("%d",&n);
	if (n>=1 && n<=100)
	{
		for (i=0; i<n; i++)
		{
			scanf("%s",&a);
			x=strlen(a);
			for(j=1;j<x; j++)
			{
				if (a[j]<'a' || a[j]>'z')
				{
					m=1;
					if (m==1) break;
				}
			}
			if (m==1) break;
			if (x>10 && x<=100)
			{
				printf("%c%d%c\n",a[0],x-2,a[x-1]);
			}
			else printf("%s\n",a);
		}
	}
	return 0;
}