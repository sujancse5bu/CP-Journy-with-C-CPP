#include<stdio.h>
int main()
{
	int n,o=1;
	scanf("%d",&n);
	while (o<=n)
	{
		if (o%2==1) printf("I hate ");
		else printf("I love ");
		if (o<n) printf("that ");
		o++;
	}
	printf("it\n");
	return 0;
}