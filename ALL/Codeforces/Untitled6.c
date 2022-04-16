#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);

	if(n==0) c=1;
	else if(n==1 || n%4==1) c=8;
	else if(n==2 || n%4==2) c=4;
	else if(n==3 || n%4==3) c=2;
	else if(n%4==0) c=6;

	printf("%d\n",c);

return 0;
	}
