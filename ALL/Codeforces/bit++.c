#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n,s;
	char x[7];
	scanf("%d",&n);
	j=0;
	k=0;
	for (i=0;i<n;i++)
	{
		scanf("%s",&x);
		if (x[0]=='+' || x[2]=='+')
		{
			j++;
		}
		else 
		{
			k++;
		}
	}
	s=j-k;
	printf("%d\n",s);
	return 0;
}