#include<stdio.h>
int main()
{
	char b[1000];
	while (NULL!= gets(b))
	{
		printf("%s\n",b);
	}
	return 0;
}