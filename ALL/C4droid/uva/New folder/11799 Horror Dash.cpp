#include <stdio.h>
int main ()
{
    int i,n,g,h,b;
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf ("%d",&b);
        g=b;
        while (b>0)
        {
            scanf ("%d",&h);
            if (h>g) g=h;
            b--;
        }
        printf ("Case %d: %d\n",i,g);
    }
    return 0;
}

