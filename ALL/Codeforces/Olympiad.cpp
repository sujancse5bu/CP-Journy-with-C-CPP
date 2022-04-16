///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,n,s,a[800];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    for (i=0;i<n;i++) if (a[i]!=0) break;
    for (j=0;i<n-1;i++) if (a[i]!=a[i+1]) j++;
    s=(j*(j+1))/2;
    if (s!=0) cout<<s<<endl;
    else if (a[n-1]!=0) cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}
