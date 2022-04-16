///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,j,a,b,n,x,k,d,p,o,z;
    string s,t,u;
    cin>>a>>b>>x;
    i=0;
    while (i<x-1)
    {
        if (i%2==0)
        {
            if (a>b)
            {
                s[i]='0';
                a--;
            }
            else
            {
                s[i]='1';
                b--;
            }
        }
        else
        {
            if (a>b)
            {
                s[i]='1';
                b--;
            }
            else
            {
                s[i]='0';
                a--;

            }
        }
        i++;
    }
    cout<<"s";
    for (i=0;i<x-1;i++) cout<<s[i];
    if (s[i-1]=='0')
    {
        while (b--) cout<<1;
        while (a--) cout<<0;
    }
    else
    {
        while (a--) cout<<0;
        while (b--) cout<<1;
    }
    return 0;
}
