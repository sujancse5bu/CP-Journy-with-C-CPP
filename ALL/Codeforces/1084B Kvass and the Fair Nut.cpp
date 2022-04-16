/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,k,l,z,x,c,v=0,b=0,n,m=0,a[1010];
    string s;
    cin>>n>>k;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        b+=a[i];
    }
    sort (a,a+n);
    v=b-k;
    if (v<0) cout<<-1<<endl;
    else if (v==0) cout<<0<<endl;
    else
    {
        m=v/n;
        cout<<m<<endl;
    }
    return 0;
}
/*
7 8
3 3 5 5 5 8 9
*/
