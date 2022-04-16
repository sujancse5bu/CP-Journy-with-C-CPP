/// ShreeHarichad Smarane
#include <stdio.h>
int main ()
{
    int i,n,m,o,p,h[10];
    scanf ("%d",&n);
    if (n>0) printf("Lumberjacks:\n");
    while (n--)
    {
        m=0;
        for (i=0;i<10;i++) scanf ("%d",&h[i]);
        if (h[0]>h[1])
        {
            for (i=1;i<10;i++)
            {
                if (h[i-1]<h[i])
                {
                    m=2;
                    break;
                }
            }
        }
        else
        {
            for (i=1;i<10;i++)
            {
                if (h[i-1]>h[i])
                {
                    m=2;
                    break;
                }
            }
        }
        if (m==2) printf("Unordered\n");
        else printf("Ordered\n");
    }
    return 0;
}
