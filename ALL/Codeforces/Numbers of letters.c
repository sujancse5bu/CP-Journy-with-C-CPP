#include <stdio.h>
#include <string.h>
int main ()
{
    int i,k,m,n,s[200]={0};
    char b[200];
    scanf("%s",b);
    n=strlen (b);
    for (i=0;i<n;i++)
    {
        k=b[i];
        s[k]++;
    }
    for (i='A';i<='Z';i++)
    {
        s[i]+=s[i+32];
    }
    for (i=65;i<=90;i++)
    {
        printf ("%c = %d\n",i,s[i]);
    }

    return 0;
}
