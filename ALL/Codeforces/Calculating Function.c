#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	if (n%2==0) printf("%lld\n",n/2);
	else printf("%lld\n",(n+1)/2*-1);
	return 0;
}