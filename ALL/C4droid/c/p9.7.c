#include<stdio.h>
int main()
{
	int i,l1,l2;
	char c1[]="I lo",c2[]="ve you",c3[12];
	l1=4;
	l2=6;
	for (i=0; i<l1; i++)
	{
		c3[i]=c1[i];
	}
	for (i=l2; i<(l1+l2); i++)
	{
		c3[i]=c2[i];
	}
	printf(