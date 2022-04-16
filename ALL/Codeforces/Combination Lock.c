#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,p,o=0;
	char x,y,s[1001],t[1001];
	scanf("%d%s%s",&n,&s,&t);
	for (i=0; i<n; i++)
	{
		if (s[i]>t[i]) {y=s[i];x=t[i];}
		else {x=s[i]; y=t[i];}
		p=y-x;
		if (p<=5) o+=p;
		else o+=10-p;
	}
	printf("%d\n",o);
	return 0;
}