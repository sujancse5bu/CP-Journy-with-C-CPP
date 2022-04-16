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
    lli v,n,f,k,c,d,m;
    cin>>n>>f>>k;
    if (f==n/2 && k==n/2) cout<<"NO"<<endl;
    else if (f==n/2+1 && k==n/2) cout<<"NO"<<endl;
    else if (f==n/2 && k==n/2+1) cout<<"NO"<<endl;
    else if (f==n/2+1 && k==n/2+1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
