///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,j,a,b,n,x,k,d,p,o,z;
    char s[500];
    cin>>a>>b>>x;
    n=a+b;
    i=0;z=a;o=b;
    while (i<x-1)
    {
        if (i%2==0)
        {
            if (a>b)
            {
                s[i]='0';
                z--;
            }
            else
            {
                s[i]='1';
                o--;
            }
        }
        else
        {
            if (a>b)
            {
                s[i]='1';
                o--;
            }
            else
            {
                s[i]='0';
                z--;

            }
        }
        i++;
    }
    for (i=0;i<x-1;i++) cout<<s[i];
    a-=z;
    b-=o;
    if (s[i-1]=='0')
    {
        while (o--) cout<< '1';
        while (z--) cout<< '0';
    }
    else
    {
        while (z--) cout<< '0';
        while (o--) cout<< '1';
    }
    return 0;
}
