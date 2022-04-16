///SHS
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long int i,j,k,l,m,n;
    cin>>n>>m;
    long int a[n],b[m];
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<m;i++) cin>>b[i];
    sort (a,a+n);
    sort (b,b+m);
    for (i=0,j=0;i<n && j<m;)
    {
        if (a[i]>b[j]) j++;
        else
        {
            j++;
            i++;
        }
        if (j==m) break;
        if (i==n)
        {
            cout<<0<<endl;
            return 0;
        }
    }
    cout<<n-i<<endl;
    return 0;
}
