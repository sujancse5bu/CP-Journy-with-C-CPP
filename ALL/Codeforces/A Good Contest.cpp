///SHS
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,d=0,n,x,y;
    char s[23];
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>s>>x>>y;
        if (x>=2400 && y>x) d=9;
    }
    if (d==9) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
