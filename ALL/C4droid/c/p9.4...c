#include<stdio.h>
int main()
{
	char c[]="BANGLADESH";
	int i,l=strlen(c);
	printf("%s\n",c);
	for (i=0; i<l; i++)
	{
		if (c[i]<='Z' && c[i]>='A')
		{
			c[i]='a'+(c[i]-'A');
		}
	}
	printf("%s",c);
	return 0;
}