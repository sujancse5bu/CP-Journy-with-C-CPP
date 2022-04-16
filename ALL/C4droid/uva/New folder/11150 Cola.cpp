#include<stdio.h>
int main()
{
    int a,n,c;
    while(scanf("%d",&n)==1)
    {
        a=n;
        while(n>=3)
        {
            c=n/3;
            a+=c;
            n=c+(n%3);
        }
        if(n==2)
        {
            a++;
        }
        printf("%d\n",a);
    }
    return 0;
}
