#include <stdio.h>
int main ()
{
    int i,j,t,n,a,b,x,y;
    scanf ("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf ("%d",&n);
        scanf ("%d",&a);
        j=1;
        x=0;
        y=0;
        while (j<n)
        {
            b=a;
            scanf ("%d",&a);
            if (b<a) x++;
            else if (b>a) y++;
            j++;
        }
        printf ("Case %d: %d %d\n",i,x,y);
    }
    return 0;
}
