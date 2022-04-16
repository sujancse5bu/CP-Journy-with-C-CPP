#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,l=0;
	char a[120];
	scanf("%s",a);
	n=strlen(a);
	for (i=0;i<n;i++)
	{
		if (a[i]=='h' && l==0) l++;
		else if (a[i]=='e' && l==1) l++;
		else if (a[i]=='l' && l==2) l++;
		else if (a[i]=='l' && l==3) l++;
		else if (a[i]=='o' && l==4) l++;
		if (l==5) break;
	}
	if (l==5) printf("YES\n");
	else printf("NO\n");
	return 0;
}