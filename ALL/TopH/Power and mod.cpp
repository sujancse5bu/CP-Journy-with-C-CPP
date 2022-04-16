/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
//vector <lli> v;
lli bigmod (lli a, lli b, lli d)
{
    if (b==0) return 1%d;
    lli x=bigmod (a,b/2,d);
    x=(x*x)%d;
    if (b%2==1) x=(x*a)%d;
    return x;
}
using namespace std;
int main ()
{
    fast;
    lli v,n,f,k,c,d,m;
    cin>>n;
    while (n--)
    {
        cin>>c>>d>>m;
        cout<<bigmod (c,d,m)<<endl;
    }
    return 0;
}
