#include <stdio.h>
#define lli long long int
int spc (int p)
{
    while (p--) printf (" ");
}
lli comb (lli n, lli r)
{
    lli i,s,d,fr=1,fn=1,fnr=1;
    s=n-r;
    while (n>1)
    {
        fn*=n;
        n--;
    }
    while (r>1)
    {
        fr*=r;
        r--;
    }
    while (s>1)
    {
        fnr*=s;
        s--;
    }
    s= fn/(fnr*fr);
    return s;
}
int main ()
{
    lli i,p,j,n,s;
    printf (" Please enter the (n+1)th terms:");
    scanf ("%lld",&n);
    i=1;
    p=n;
    spc (p+1);
    printf ("1\n");
    while (i<=n)
    {
        spc (p);
        p--;
        for (j=0;j<=i;j++)
        {
            s=comb(i,j);
            printf ("%lld ",s);
        }
        printf ("\n");
        i++;
    }
    return 0;
}















