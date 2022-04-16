#imclude<stdio.h>
int main()
{
	int a,b,x,z,g;
	scanf("%d %d",&a,&b);
	if (a==0) g=a;
	else if (b==0) g=b;
	else 
	{
		while (b!=0)
		{
			z=b;
			b=a%b;
			a=z;
		}
		g=a;
	}
	printf("gcd= %d",g);
	return 0;
}