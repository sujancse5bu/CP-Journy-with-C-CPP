#include<stdio.h>
#include<string.h>
int main()
{
	int i,x,t,s;
	char n[60];
	scanf("%d %d",&x,&t);
	scanf("%s",&n);
	s=strlen(n);
	for (i=0;i<s-1;i++)
	{
		if (n[i]=='B' && n[i+1]=='G')
		{
			n[i]='G';
			n[i+1]='B';
		}
	}
	printf("%s\n",n);
	return 0;
}