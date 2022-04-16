#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,o;
	char c,x[102],b[]="qwertyuiopasdfghjkl;zxcvbnm,./";
	n=strlen (b);
	scanf("%c",&c);
	scanf("%s",&x);
	o=strlen (x);
	if (c=='R')
	{
		for (i=0; i<o; i++)
		{
			for (j=0;j<n;j++)
			{
				if (x[i]==b[j])
				{
					printf("%c",b[j-1]);
					break;
				}
			}
		}
	}
	else
	{
		for (i=0; i<o; i++)
		{
			for (j=0;j<n;j++)
			{
				if (x[i]==b[j])
				{
					printf("%c",b[j+1]);
					break;
				}
			}
		}
	}
	printf("\n");
	return 0;
}