#include <stdio.h>
int main ()
{
    int i,n,s,t,u;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d%d%d",&s,&t,&u);
        printf ("Case %d: ",i+1);
        if (s>20 || t>20 || u>20) printf ("bad\n");
        else printf ("good\n");
    }
    return 0;
}
