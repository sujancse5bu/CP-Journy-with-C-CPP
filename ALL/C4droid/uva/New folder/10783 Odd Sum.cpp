#include <stdio.h>
int main ()
{
    int i,n,b,c,s;
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        s=0;
        scanf ("%d%d",&b,&c);
        if (b%2==0) b++;
        while (b<=c)
        {
            s+=b;
            b+=2;
        }
        printf ("Case %d: %d\n",i,s);
    }
    return 0;
}
