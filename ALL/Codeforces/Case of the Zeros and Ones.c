#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,z,o;
	char g;
	z=0;o=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("\n%c",&g);
		if (g=='1') o++;
		else z++;
	}
	printf("%d\n",abs(o-z));
	return 0;
}