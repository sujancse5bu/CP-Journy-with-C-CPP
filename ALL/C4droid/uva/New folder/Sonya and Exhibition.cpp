///SHS
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main ()
{
    int n,m,a[10000],b[10000],i,j,k,d;
    char s[10003];
    cin>>n>>m;
    for (i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
        j=a[i]-1;
        for (;j<b[i]/2;j++) s[j]='0';
        j<b[i]/2;
        for (;j<b[i];j++) s[j]='1';
    }
    sort (b,b+m);
    while (b[m-1]<n)
    {
        s[j]='0';
        b[m-1]++;
        j++;
    }
    cout<<s;
    return 0;
}
