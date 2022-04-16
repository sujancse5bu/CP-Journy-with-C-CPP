#include <stdio.h>
#define lli long long int
lli bigmod (lli a, lli n, lli m)
{
    lli s;
    if (n==0) return 1;
    if (n%2==1) return ((a%m)*(bigmod(a,n-1,m)%m))%m;
    else
    {
        s=(bigmod(a,n/2,m)%m);
        return s*s%m;
    }
}
int main ()
{
    lli a,m,n,s;
    printf ("Please enter the Base: ");
    scanf ("%lld",&a);
    printf ("Please enter the Power: ");
    scanf ("%lld",&n);
    printf ("Please enter the Divisor: ");
    scanf ("%lld",&m);
    s=bigmod(a,n,m);
    printf("Modulus: %lld.\n",s);
    return 0;
}
