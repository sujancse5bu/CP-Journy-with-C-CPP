///SHS
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main ()
{
    int i,b=0,n,m=1,o,d,a=0,p;
    string s;
    cin>>s;
    n=s.length();
    i=1;
    while (i<n)
    {
        m=pow (2,i);
        i++;
        b+=m;
    }
    ///cout<<b<<endl;
    for (i=n-1,m=0;i>=0;i--,m++)
    {
        if (s[i]=='4') d=0;
        else d=1;
        p=d*pow(2,m);
        a+=p;
        ///cout<<a<<endl;
    }
    ///cout<<a;
    b+=++a;
    cout<<b<<endl;
    return 0;
}
