///ShreeHarichad Smarane
#include <stdio.h>
#include <string.h>
int main ()
{
    int i=0,j,n,o,s,g,d;
    char a[5000];
    scanf ("%d",&n);
    getchar ();
    while (i<n)
    {
        s=0;
        d=0;
        gets (a);
        o=strlen (a);
        for (j=0;j<o;j++)
        {
            if (a[j]>='a' && a[j]<'s')
            {
                g=a[j];
                d=g%3;
                if (d==0) s+=3;
                else s+=d;
            }
            else if (a[j]=='t' || a[j]=='w' || a[j]==' ') s++;
            else if (a[j]=='u' || a[j]=='x') s+=2;
            else if (a[j]=='v' || a[j]=='y') s+=3;
            else if (a[j]=='s' || a[j]=='z') s+=4;
        }
        printf ("Case #%d: %d\n",i+1,s);
        i++;
    }
    return 0;
}
