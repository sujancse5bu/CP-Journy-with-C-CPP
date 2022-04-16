#include <stdio.h>
int main ()
{
    int i,j,k,d,b,ls,lsb;
    char s[50000],sb[50000];
    scanf ("%s%s",s,sb);
    ls=0;
    lsb=0;
    i=0;
    while (s[i]!=NULL)
    {
        ls++;
        i++;
    }
    i=0;
    while (sb[i]!=NULL)
    {
        lsb++;
        i++;
    }
    d=ls-lsb;
    for (i=0;i<d;i++)
    {
        b=0;
        for (j=0,k=i;j<lsb;j++,k++)
        {
            if (sb[j]!=s[k]) break;
            else b++;
        }
        if (b==lsb) break;
    }
    if (b==lsb) printf ("YES\n");
    else printf ("NO\n");
    return 0;
}
