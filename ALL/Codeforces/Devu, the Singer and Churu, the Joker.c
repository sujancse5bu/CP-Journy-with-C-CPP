#include <stdio.h>
int main()
{
    int i,n,d,u,s,t,x[1000];
    s=0;t=0;u=0;
    scanf ("%d%d",&n,&d);
    for (i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        u+=x[i];
        s+=x[i];
        if (s>d) t=5;
        s+=10;
    }
    if (t==5) printf ("-1\n");
    else
    {
        t=d-u;
        t=t/5;
        printf("%d\n",t);
    }
    return 0;
}
