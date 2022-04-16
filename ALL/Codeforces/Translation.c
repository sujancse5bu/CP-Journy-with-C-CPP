#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,o,n;
	o=9;
	char a[102],b[102];
	scanf("%s %s",a,b);
	n=strlen (a);
	for (i=0,j=n-1; i<n; i++,j--)
	{
		if (a[i]!=b[j]) 
		{
			o=7;
			break;
		}
	}
	if (o!=7) printf("YES\n");
	else printf("NO\n");
	return 0;
}