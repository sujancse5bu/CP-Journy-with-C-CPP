/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> v,t;
lli p[600000],q[10000];//
//string s,t;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,c,d,a,b,x=1,y=0,z=0,sum=0;
    cin>>n>>k;
    if (n<=k-1) cout<<n-1<<endl;
    else
    {
        z=k-1+(((n-k)*(n-k+1))/2);
        cout<<z<<endl;
    }
    return 0;
}

