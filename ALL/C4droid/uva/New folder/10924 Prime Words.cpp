#include<stdio.h>
#include<string.h>
int isp;
int prm (int n)
{
    int i;
    if (n==1)
    isp=1;
    else
    {
        isp=1;
        for(i=2;i<=(n/2);i++)
        {
           if(n%i==0)
           isp=0;
        }
    }
}
int main()
{
    char ch[21];
    int i,l,s;
    while(gets(ch))
    {
        s=0;
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
           if((ch[i]>='A')&&(ch[i]<='Z')) s+=ch[i]-38;
           else if((ch[i]>='a')&&(ch[i]<='z')) s+=ch[i]-96;
        }
        prm(s);
        if(isp==0) printf("It is not a prime word.\n");
        if(isp>0) printf("It is a prime word.\n");
    }
    return 0;
}
