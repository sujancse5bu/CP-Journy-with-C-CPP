/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define fast ios :: sync_with_stdio(false); cin.tie(0);
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define lli long long int
#define pb push_back
#define bn begin()
#define rs resize
#define en end()
using namespace std;
int main ()
{
    fast;
    lli i,j,k,l;
    cin>>i>>j>>k>>l;
    if (i==l && i==0)
    {
    	if (k>0) cout<<0<<endl;
    	else cout<<1<<endl;
	}
	else if (i==l) cout<<1<<endl;
	else cout<<0<<endl;
    return 0;
}
