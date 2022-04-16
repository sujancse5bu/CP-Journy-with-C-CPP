#include<stdio.h>
#include<string.h>
int main()
{
	int i,a;
	char n[500],o[500],p[500];
	scanf("%s%s",&n,&o);
	a=strlen (o);
	for (i=0;i<a;i++)
	{
		if (n[i]=='0' && o[i]=='1') p[i]='1';
		else if (n[i]=='1' && o[i]=='0') p[i]='1';
		else p[i]='0';
	}
	for (i=0;i<a;i++)
	{
		printf("%c",p[i]);
	}
	printf("\n");
	return 0;
}