/*________SHS________*/
#include <bits/stdc++.h>
long long int sum = 0;
void mySum(long long int m,long long int n) {
	sum += m;
	if (m < n) mySum(m + 1, n);
}

int main ()
{
    long long int m, n;
    scanf("%lld%lld", &m, &n);
	mySum(m, n);
	printf("%lld", sum);
	return 0;
}
