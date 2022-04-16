/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
//vector <int> v,t;lli
//int a[600000];//string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m=0,o,c=-1,d=-1,x,y,z,sum=0;
    cin>>i>>j>>n;
    o=min(i,j);
    o=min(o,n);
    if (o==n) cout<<n*3-3<<endl;
    else if (o==j) cout<<j*3<<endl;
    else if (o==i && n-i>1) cout<<i*3+3<<endl;
    else cout<<i*3<<endl;

    return 0;
}

