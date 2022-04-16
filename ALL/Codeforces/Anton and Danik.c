#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,a=0,d=0;
	char x[100001];
	scanf("%d %s",&n,&x);
	for (i=0; i<n; i++)
	{
		if (x[i]=='A') a++;
		else if (x[i]=='D') d++;
	}
	if (a>d) printf("Anton\n");
	else if (a<d) printf("Danik\n");
	else printf("Friendship\n");
	return 0;
}