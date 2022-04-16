#include<stdio.h>
int main()
{
	int l,i;
	char a[200];
	scanf("%s",&a);
	l=strlen(a);
	for (i=0; i<l; i++)
	{
		if (a[i]>='A' && a[i]<='Z') a[i]=a[i]+32;
		if (a[i]!='a' && a[i]!='A' && a[i]!='E' && a[i]!='e' && a[i]!='I' && a[i]!='i' && a[i]!='o' && a[i]!='O' && a[i]!='U' && a[i]!='u' && a[i]!='y' && a[i]!='Y') printf(".%c",a[i]);
	}
	printf("\n");
	return 0;
}