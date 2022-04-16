///SHS
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,k,l,n,a[200];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    j=a[0],k=a[1];
    if (n==2)
    {
        if (k==j) cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<j<<" "<<k<<endl;
        return 0;
    }
    sort (a,a+n);
    for (i=0,l=0;i<n-1;i++)
    {
        if (a[i]!=a[i+1])
        {
            l=1;
            break;
        }
    }
    if (l==0) {cout<<"NO"<<endl;return 0;}
    for (i=0;i<n;i++) if (a[i]!=j && a[i]!=k) {cout<<"NO"<<endl;return 0;}
    cout<<"YES"<<endl<<j<<" "<<k<<endl;
    return 0;
}
