#include <stdio.h>
int main ()
{
    int i,n,m,a,b,c;
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf ("%d%d%d",&a,&b,&c);
        if (a<b && a>c) m=a;
        else if (a>b && a<c) m=a;
        else if (a<b && b<c) m=b;
        else if (a>b && b>c) m=b;
        else if (a<c && b>c) m=c;
        else if (a>c && b<c) m=c;
        printf ("Case %d: %d\n",i,m);
    }
    return 0;
}
