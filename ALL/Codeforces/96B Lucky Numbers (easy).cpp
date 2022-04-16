#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,x,y,z;
    string s;
    cin>>s;
    l=s.size();
    if (l%2==1)
    {
        i=l/2+1;
        while (i--) {cout<<4;}
        i=l/2+1;
        while (i--) {cout<<7;}
        cout<<endl;
        return 0;
    }
    for (i=0,x=0,y=0,z=0;i<l;i++)
    {
        if (s[i]=='4') x++;
        else if (s[i]=='7') y++;
        if (s[i]>'4')
        {
            z++;
            cout<<z<<endl;
        }
    }
    if (x==y && y==l/2)
    {
        cout<<s<<endl;
        return 0;
    }
    if (z>=l/2)
    {
        i=l/2+1;
        while (i--) {cout<<4;}
        i=l/2+1;
        while (i--) {cout<<7;}
        cout<<endl;
        return 0;
    }
    x=l/2-x;
    y=l/2-y;
    for (i=0;i<l;i++)
    {
        if (s[i]=='4' || s[i]=='7') cout<<s[i];
        else if (x>0)
        {
            cout<<4;
            x--;
        }
        else cout<<7;
    }
    cout<<endl;
    return 0;
}
