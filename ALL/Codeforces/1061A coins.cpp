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
    cin>>v>>n;
    k=n/v;
    if (n%v>0) k++;
    cout<<k<<endl;
    return 0;
}
