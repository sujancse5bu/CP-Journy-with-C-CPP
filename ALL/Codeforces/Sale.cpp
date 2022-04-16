///SHS
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,s=0,n,m,a[3000];
    cin>>n>>m;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    for (i=0;m--;i++) if (a[i]<0) s+=a[i];
    s*=-1;
    cout<<s<<endl;
    return 0;
}
