/// ShreeHarichad Smarane
#include <stdio.h>
int main ()
{
    int i,a,b,c,d,s;
    while (1)
    {
        scanf ("%d %d %d",&a,&b,&c);
        if (a==0 && b==0 && c==0) return 0;
        else if (b>a && b>c)
        {
            d=b*b;
            s=a*a+c*c;
        }
        else if (c>a && c>b)
        {
            d=c*c;
            s=a*a+b*b;
        }
        else
        {
            d=a*a;
            s=b*b+c*c;
        }
        if (d==s) printf ("right\n");
        else printf ("wrong\n");
    }
}
