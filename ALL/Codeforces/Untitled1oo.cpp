
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100], word[100];
    int length, i, j ;
    gets(ch);
    length = strlen(ch);
    for(i = 0, j = 0; i<length; i++)
    {
        if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'y' || ch[i] == 'Y' || ch[i] == 'e' ||ch[i] == 'E' || ch[i] == 'u' || ch[i] == 'U' || ch[i] == 'i' || ch[i] == 'I'){}
        else
        {
            word[j] = ch[i];
            j++;
        }
    }
    printf("%s\n", word);
    length = strlen(word);
    printf("%d\n", length);

    for(i = 0; i < length; i++){
        printf(".%c", word[i]);
    }
    return 0;
}
