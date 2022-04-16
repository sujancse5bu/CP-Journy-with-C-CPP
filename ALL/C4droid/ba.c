#include<stdio.h>
int main()
{
	char a[100];
	gets (a);
	int v=0,c=0,i;
	int sz=strlen (a);
	for (i=0;i<sz; i++)
	{
		if (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
		{
			v++;
		}
		else if (a[i]!=' ') c++;
	}
	printf("v= %d\nc=%d",v,c);
	return 0;
}