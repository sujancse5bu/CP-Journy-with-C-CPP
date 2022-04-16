#include<stdio.h>
int main()
{
	int b=0,c,i,x,r,p=0,q;
	float a,y,z;
    printf("Enter the Decimal floating value: ");
	scanf("%f",&a);
	printf("Enter the base: ");
	scanf("%d",&r);
	q=a;
	x=a;
	y=a-x;
	z=y;
	while (q>0)
	{
		q=q/r;
		b++;
	}
	int ar[100000]={0};
	for (i=0; i<b; i++)
	{
		ar[i]=x%r;
		x=x/r;
	}
	if (r==2) printf("The Binary value: ");
	else if (r==8) printf("The Octal value: ");
	else if (r==16) printf("The Hexa-decmal value: ");
	for (i=b-1; i>=0; i--)
	{
		if (ar[i]==10) printf("A");
		else if (ar[i]==11) printf("B");
		else if (ar[i]==12) printf("C");
		else if (ar[i]==13) printf("D");
		else if (ar[i]==14) printf("E");
		else if (ar[i]==15) printf("F");
		else printf("%d",ar[i]);
	}
	if (y>0)
	{
		while (y>0)
		{
			y=y*r;
			c=y;
			y=y-c;
			p++;
		}
		int arr[10000]={0};
		for (i=0; i<b; i++)
		{
			arr[i]=z*r;
			z=z-arr[i];
		}
		printf(".");
		for (i=0; i<p; i++)
		{
			if (ar[i]==10) printf("A");
			else if (ar[i]==11) printf("B");
			else if (ar[i]==12) printf("C");
			else if (ar[i]==13) printf("D");
			else if (ar[i]==14) printf("E");
			else if (ar[i]==15) printf("F");
			else printf("%d",ar[i]);
		}
	}
	return 0;
}
