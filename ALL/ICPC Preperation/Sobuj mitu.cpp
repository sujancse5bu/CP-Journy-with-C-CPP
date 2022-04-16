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
vector <lli> b;
int main ()
{
    fast;
    lli i,k=0,l=0,n,m=0,j=0,c=0,v=0,x;
    cin>>n;
    m=6;
    for (i=4;i<=n;i++) m+=(i*(i-1));
	cout<<m<<endl;
    return 0;
}
