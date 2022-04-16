#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,n;
	char a[203];
	scanf("%s",&a);
	n=strlen (a);
	while (i<n)
	{
		if (a[i]=='W' && a[i+1]=='U' && a[i+2]=='B' && i==0) 
		{
			for (i=i+3;a[i]!=='W' 
		}
		}
		else
		{
			printf("%c",a[i]);
			i++;
		}
	}
	printf("\n");
	return 0;
}