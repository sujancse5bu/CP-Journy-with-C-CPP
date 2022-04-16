/// ShreeHari Smarane
#include <string.h>
#include <stdio.h>
int main ()
{
    int i,j,n,m,x,d,t,s,p[100000]={0};
    char z[100001];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s %d",z,&m);
        x=m;
        s = strlen (z);
        for (j=0;j<s;j++)
        {
            t=z[j];
            p[t]++;
        }
        for (j='a';j<='z';j++)
        {
            if (p[j]>1)
            {
                d=p[j]-1;
                x=x-d;
            }
            p[j]=0;
        }
        if (x<0) printf("NO\n");
        else printf ("YES\n");
    }
    return 0;
}
