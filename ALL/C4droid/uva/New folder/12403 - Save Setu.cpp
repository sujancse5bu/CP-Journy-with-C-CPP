#include <stdio.h>
int main ()
{
    int i,z=0,n,j,s=0;
    char k[20];
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%s",k);
        if (k[0]=='d')
        {
            scanf ("%d",&j);
            s+=j;
        }
        else printf ("%d\n",s);
    }
    return 0;
}
