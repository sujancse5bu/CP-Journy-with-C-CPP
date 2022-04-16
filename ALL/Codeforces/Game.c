#include<stdio.h>
int main()
{
    int a,b,aa,bb,s,l;
    scanf("%d%d%d%d",&a,&b,&aa,&bb);
    if (a+aa>=b+bb) printf("First\n");
    else printf("Second\n");
    return 0;
}
