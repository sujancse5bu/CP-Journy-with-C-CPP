#include<stdio.h>
int main()
{
	int i,j,n,d,p,s,t;
	char e[100],f[100];
	while (scanf("%d %d",&n,&d)==2)
	{
		if (n<=50 && n>=1 && d<=50 && d>=1)
		{
			t=0;
			for (i=0; i<d; i++)
			{
				s=0;
				scanf("%s",&e);
				for (j=0;j<n;j++)
				{
					scanf("%d",&p);
					if (p==1) s+=p;
				}
				if (s==n)
				{
					t=strlen(e);
					for (j=0;j<t;j++)
					{
						f[j]==e[j];
					}
				}
			}
			if (s!=n) printf("Pizza antes de FdI\n");
			else printf("%s\n",e);
		}
	}
	return 0;
}