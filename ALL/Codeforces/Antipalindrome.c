#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j,f,n;
    char m[100];
    scanf("%s",m);
    n=strlen (m);
    f=n;
    i=0;
    j=n-1;
    if (n==1)
    {
        printf ("0\n");
        return 0;
    }
    else if (n==2)
    {
        if (m[0]==m[1]) printf("0\n");
        else printf ("2\n");
        return 0;
    }
    else if (n==3)
    {
        if (m[0]==m[1] && m[1]==m[2]) printf ("0\n");
        else if (m[0]==m[2]) printf ("2\n");
        else printf ("3\n");
        return 0;
    }
    for (i=0;i<n-1;i++)
    {
        if (m[i]!=m[i+1]) break;
    }
    if (i==n-1)
    {
        printf ("0\n");
        return 0;
    }
    for (i=0,j=n-1;i<n/2;i++,j--)
    {
        if (m[i]!=m[j])
        {
            printf ("%d\n",n);
            return 0;
        }
    }
    printf ("%d\n",n-1);
    return 0;
}
