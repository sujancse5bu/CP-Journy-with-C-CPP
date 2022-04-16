#include <stdio.h>
#include <string.h>
int main ()
{
    int i=0,j=0,d,h,a[5000];
    char c,s[2000];
    scanf ("%s",s);
    d=strlen (s);
    while (1)
    {
        if (i==j)
        {
            scanf("%c",s[i]);
            if (s[i]==')') break;
        }
        else scanf ("%d",a[i]);
    }

    return 0;
}
