#include<stdio.h>
int main()
{
	char c[]="Bangladesh";
	int i,l=strlen(c);
	printf("%s\n",c);
	for (i=0; i<l; i++)
	{
		if (c[i]<='z' && c[i]>='a')
		{
			c[i]='A'+(c[i]-'a');
		}
	}
	printf("%s",c);
	return 0;
}