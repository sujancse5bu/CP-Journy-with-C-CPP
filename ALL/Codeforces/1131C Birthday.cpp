/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//;//lli a[30][30],
vector <int> t;
int main ()
{
    fast;
    unsigned lli i,j,n,k,l,m,o,x=1,y=0,z=0,g,h,f,w=121,sum=0,d;
    cin>>n;
    t.resize(n);
    f(i,0,n-1) cin>>t[i];
    sort (t.bn,t.en);
    for (i=0;i<n;i+=2) cout<<t[i]<<' ';
    if (n%2==0) j=n-1;
    else j=n-2;
    for (;j>1;j-=2) cout<<t[j]<<' ';
    cout<<t[1]<<endl;
    return 0;
}

