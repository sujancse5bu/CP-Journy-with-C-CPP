#include <stdio.h>
#include <math.h>
int main ()
{
    int i,j,k,l,s;
    while (1)
    {
        s=0;
        scanf ("%d%d",&k,&l);
        if (k==0 && l==0) return 0;
        i= sqrt (k);
        for (;;i++)
        {
            j=i*i;
            if (j>=k && j<=l) s++;
            if (j>l) break;
        }
        printf ("%d\n",s);
    }
}
