#include <stdio.h>
#include <math.h>
int main ()
{
    long long int i,k,n;
    scanf ("%lld%lld",&i,&k);
    n=pow (i,k-1);
    printf ("%lld\n",n);
    return 0;
}
