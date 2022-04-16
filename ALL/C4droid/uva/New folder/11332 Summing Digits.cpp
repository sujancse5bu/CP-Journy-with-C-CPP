#include <stdio.h>
int main ()
{
    long int i,g,d,s,n;
    while (1)
    {
        scanf ("%ld",&n);
        if (n==0) return 0;
        sjn:
        g=0;
        while (n>0)
        {
            d=n%10;
            n/=10;
            g+=d;
        }
        if (g>9)
        {
            n=g;
            goto sjn;
        }
        printf ("%d\n",g);
    }
}
