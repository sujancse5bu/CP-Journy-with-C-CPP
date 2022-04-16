///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long long int i,j,k,n,l,a[100000];
    cin>>n;
    for (i=0,j=0;i<n;i++)
    {
        cin>>l;
        j+=l;
    }
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    l=a[n-1]+a[n-2];
    if (l>=j) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

