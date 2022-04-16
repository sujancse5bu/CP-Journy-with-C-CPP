///ShreeHarichad Smarane
#include <stdio.h>
#include <string.h>
int main ()
{
    int i=1;
    char  s[10000];
    while (1)
    {
        scanf("%s",s);
        if (strcmp(s,"#")==0) return 0;
        else if (strcmp(s,"HELLO")==0) printf ("Case %d: ENGLISH\n",i);
        else if (strcmp(s,"HOLA")==0) printf ("Case %d: SPANISH\n",i);
        else if (strcmp(s,"HALLO")==0) printf ("Case %d: GERMAN\n",i);
        else if (strcmp(s,"BONJOUR")==0) printf ("Case %d: FRENCH\n",i);
        else if (strcmp(s,"CIAO")==0) printf ("Case %d: ITALIAN\n",i);
        else if (strcmp(s,"ZDRAVSTVUJTE")==0) printf ("Case %d: RUSSIAN\n",i);
        else printf ("Case %d: UNKNOWN\n",i);
        i++;
    }
    return 0;
}
