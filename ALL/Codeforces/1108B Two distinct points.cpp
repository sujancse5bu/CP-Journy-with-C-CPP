/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define pi 3.141592654
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,n,m,l,k;
    cin>>n;
    f(i,1,n)
    {
        cin>>j>>l>>m>>k;
        if (j==k) cout<<j+1<<' '<<k<<endl;
        else cout<<j<<' '<<k<<endl;
    }
    return 0;
}
