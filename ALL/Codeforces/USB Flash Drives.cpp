///ShreeHarichad Smarane
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,n,m,a[100009],s=0;
    cin>>n>>m;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    for (i=n-1,j=1;i>=0;i--,j++)
    {
        s+=a[i];
        if (s>=m) break;
    }
    cout<<j<<endl;
    return 0;
}
