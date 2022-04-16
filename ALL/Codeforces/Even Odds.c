#include<stdio.h>
int main()
{
	long long int i,j,n,k;
	scanf("%lld %lld",&n,&k);
	if (n/2>=k)
	{
		j=k*2-1;
	}
	else
	{
		j=(k-n/2)*2;
	}
	printf("%lld\n",j);
	return 0;
}