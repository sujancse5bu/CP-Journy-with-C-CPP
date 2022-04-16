#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,x,q;
	q=0;
	char a[30];
	scanf("%s",a);
	n=strlen(a);
	for (i=0;i<n;i++)
	{
		if (a[i]=='7' || a[i]=='4') q++;
	}
	if (q==4 || q==7) printf("YES\n");
	else printf("NO\n");
	return 0;
}