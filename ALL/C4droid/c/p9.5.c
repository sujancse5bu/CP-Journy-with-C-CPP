#include<stdio.h>
int string_length( char str[])
{
	int length, i;
	for (i=0,length=0; str[i]!=0; i++,length++){}
	return length;
}
int main()
{
	int length;
	char c[100];
	while (scanf("%s",&c)==1)
	{
		length=string_length(c);
		printf("%d\n",length);
	}
	return 0;
}