/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
//vector <int> v;
lli a[600000];
int main ()
{
    fast;
    lli i,j,n,k,l,m=0,o,c,z;
    cin>>n>>j>>k;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    if (j>k) cout<<n<<endl;
    else if (j==k)
    {
        for (i=0;i<n;i++) if (a[i]<=j) m++;
        if (m%2==0) m/=2;
        else m=m/2+1;
        cout<<m<<endl;
    }
    else
    {
        for (i=0;i<n;i+=2) if (a[i]<=j) m++;
        cout<<m<<endl;
    }
    return 0;
}
