#include <stdio.h>
void TOH (int n, char s,char a,char t);
int main ()
{
	int n;
	char s='A',a='B',t='C';
	scanf("%d",&n);
	TOH(n,s,a,t);
	return 0;
}

void TOH (int n, char s,char a,char t)
{
	if (n!=0)
	{
		TOH(n-1,s,t,a);
		printf("%d %c %c %c\n",n-1,s,a,t);
		TOH(n-1,a,s,t);
	}
}
