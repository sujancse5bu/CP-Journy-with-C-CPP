#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	i=1;
	char a[120];
	scanf("%s",a);
	n=strlen(a);
	if (a[0]>='a' && a[0]<='z') a[0]=a[0]-32;
	while (i<n)
	{
		if (a[i]>='A' && a[i]<='Z') a[i]=a[i]+32;
		i++;
	}
	printf("%s\n",a);
	return 0;
}