/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector <lli> v;

int main ()
{
    fast;
    lli i,j,b=0,n,m=0,a[120];
    string s,k,l,z,x,c;
    cin>>s>>k>>l>>z>>x>>c;
    if (s[0]==k[0] || s[0]==l[0] || s[0]==z[0] || s[0]==x[0] || s[0]==c[0]) cout<<"YES"<<endl;
    else if (s[1]==k[1] || s[1]==l[1] || s[1]==z[1] || s[1]==x[1] || s[1]==c[1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
