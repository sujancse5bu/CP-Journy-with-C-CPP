/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
//vector <int> v;
lli a[6000];
int main ()
{
    fast;
    lli i,j,n,l,m=0,o=0,c,z;
    cin>>n>>m;
    a[m]++;
    for (i=1;i<n;i++)
    {
        cin>>z;
        if (o<z) o=z;
        a[z]++;
    }
    if (m>o) cout<<0<<endl;

    return 0;
}

