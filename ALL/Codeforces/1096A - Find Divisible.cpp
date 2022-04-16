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
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>k>>l;
        m=l/k;
        cout<<k<<' '<<m*k<<endl;
    }
    return 0;
}

