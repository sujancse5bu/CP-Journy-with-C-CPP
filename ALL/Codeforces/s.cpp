#include<stdio.h>
#include<string.h>
int  main()
{
    char s[101];
    int i,ln,ck;
    scanf("%s",s);
    ln=strlen(s);

    if(s[0]>='a'&&s[0]<='z')
    {
        ck=0;
        for(i=1;i<ln-1;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
               ck=1;
            }
        }
        if(ck==1)
        {
            //strlwr(s);
            s[0]-=32;
            s[0]=s[0]-32;
            printf("%s\n",s);
        }
        else
        {
            printf("%s\n",s);
        }
    }

    return 0;
}
