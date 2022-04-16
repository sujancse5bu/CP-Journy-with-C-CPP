#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,s=0;
	char a[120];
	scanf("%d %s",&n,&a);
	if (a[0]>='a' && a[0]<='z')
	{
		for (i=1;i<n;i++)
		{
			if (a[i]>='A' && a[i]<='Z')
			{
				s=1;break;
			}
		}
	}
	else
	{
		for (i=1;i<n;i++)
		{
			if (a[i]>='a' && a[i]<='z')
			{
				s=1;break;
			}
		}
	}
	if (s>0) printf("YES\n");
	else printf("NO\n");
	return 0;
}