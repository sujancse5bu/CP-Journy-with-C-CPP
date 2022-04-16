/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int/// 1 1000000000000000000
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,k,l,z,x,r,c,b=0,n,m=0;
    cin>>l>>r>>k;
    vector <lli> v;
    for (i=0;m<r;i++)
    {
        m=pow(k,i);
        if (m<0) break;
        if (m>=l && m<=r) v.pb(m);
    }
    c=v.size();
    if (c==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    for (i=0;i<c;i++) cout<<v[i]<<' ';
    cout<<endl;
    return 0;
}

