#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,u,l;
	char s[120];
	scanf("%s",&s);
	n=strlen (s);
	u=0;l=0;
	for (i=0; i<n; i++)
	{
		if (s[i]>='a' && s[i]<='z') l++;
		else u++;
	}
	if (l>=u)
	{
		for (i=0; i<n; i++)
		{
			if (s[i]>='A' && s[i]<='Z') s[i]+=32;
		}
	}
	else
	{
		for (i=0; i<n; i++)
		{
			if (s[i]>='a' && s[i]<='z') s[i]-=32;
		}
	}
	printf("%s\n",s);
	return 0;
}