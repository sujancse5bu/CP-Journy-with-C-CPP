///ShreeHarichad Smarane
#include <stdio.h>
int main()
{
    int i,n,a,b,c, e,g,f;
    char x[5];
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d%c%d%c%d %d%c%d%c%d",&a,&x[0],&b,&x[1],&c,&e,&x[2],&f,&x[3],&g);
        if (a<e) b--;
        if (b<f) c--;
        printf ("Case #%d: ",i+1);
        if (c<g) printf ("Invalid birth date\n");
        else if (c-g>130) printf ("Check birth date\n");
        else printf ("%d\n",c-g);
    }
    return 0;
}
