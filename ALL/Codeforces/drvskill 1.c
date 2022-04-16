
#include<stdio.h>
#include <string.h>
int main()
{
    int i,j,n,m;
    char b[100002];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s",b);
        m=strlen(b);
        m=m-5;
        printf("Case #%d ->",i+1);
        for (j=0;j<m;j++)
        {
            if (b[j]>='A' && b[j]<='Z') printf(" ");
            printf("%c",b[j]);
        }
        printf("\n");
    }
    return 0;
}
