#include<stdio.h>
int main ()
{
    long int i,a,b,m=0,n=0,s;
    scanf("%ld%ld",&a,&b);
    i=1;
    s=1;
    scanf("%ld",&m);
    n=m;
    while (i<a)
    {
        scanf("%ld",&m);
        if (m-n<=b) s++;
        else s=1;
        n=m;
        i++;
    }
    printf("%ld\n",s);
    return 0;
}
