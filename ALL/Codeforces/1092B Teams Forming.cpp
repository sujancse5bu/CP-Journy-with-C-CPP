/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;

using namespace std;
int main ()
{
    fast;
    lli i,j,k,l,z,x,c,v,b=0,n,m=0,a[120];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    for (i=0;i<n-1;i+=2) m+=(a[i+1]-a[i]);
    cout<<m<<endl;
    return 0;
}

