/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
//vector <int> v;
//lli a[600000],b[600000];
int main ()
{
    fast;
    lli i,j,n,l,m=0,x,y,o,c,z;
    cin>>n;
    if (n<4) cout<<n+1<<endl;
    else
    {
        m=sqrt(n);
        x=n-m*m;
        if (x>m) cout<<m+m+2<<endl;
        else if (x>0) cout<<m+m+1<<endl;
        else cout<<m+m<<endl;
    }

    return 0;
}
