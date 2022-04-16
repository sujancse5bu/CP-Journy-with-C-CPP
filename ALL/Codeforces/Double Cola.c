#include<stdio.h>
int main()
{
	long int n;
	scanf("%ld",&n);
	if (n%5==1) printf("Sheldon\n");
	else if (n%5==2) printf("Leonard\n");
	else if (n%5==3) printf("Penny\n");
	else if (n%5==4) printf("Rajesh\n");
	else if (n%5==0) printf("Howard\n");
	return 0;
}