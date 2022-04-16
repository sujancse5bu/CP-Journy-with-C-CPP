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
    cin>>n>>k;
    c=n*2;
    d=c/k;
    if (c%k>0) d++;
    c=n*5;
    d+=c/k;
    if (c%k>0) d++;
    c=n*8;
    d+=c/k;
    if (c%k>0) d++;
    cout<<d<<endl;
    return 0;
}
