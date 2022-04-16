///Om ShantiHari
#include <stdio.h>

void bscn (int a, int r);

int main ()
{
    int i,j,n,x,s;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&x);
        s=0;
        for (j=1;j<=x/2;j++) if (x%j==0) s+=j;
        if (s==x)
        {
            printf ("%d is perfect number and the octal value is ",x);
            bscn (s,8);
        }
        else
        {
            if (s<x) printf ("%d is a deficient number and the binary value is ",x);
            else printf ("%d is an abundant number and the binary value is ",x);
            bscn (x,2);
        }
    }

    return 0;
}

void bscn (int a, int r)
{
    int i,j,k,x[10000];
    k=a;
    i=0;
    while (k>0)
    {
        x[i]=k%r;
        i++;
        k/=r;
    }
    for (j=i-1;j>=0;j--) printf ("%d",x[j]);
    printf ("\n");
}
