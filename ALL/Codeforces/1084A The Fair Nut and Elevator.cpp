/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,k,l,z,x,c,v,b=0,n,m=0;
    string s;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>c;
        b+=(c*(4*i));
    }
    cout<<b<<endl;
    return 0;
}
