#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int i,n,d,k;
    char v[101];
    cin>>v;
    n=strlen (v);
    d=1;k=0;
    for (i=0;i<n;i++)
    {
        if (v[i]=='A' || v[i]=='E' || v[i]=='I' || v[i]=='O' || v[i]=='U' || v[i]=='Y') d=1;
        else d++;
        if (d>k) k=d;
    }
    cout<<k<<endl;
    return 0;
}
