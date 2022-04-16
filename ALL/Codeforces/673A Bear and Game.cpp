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
    lli v,n,f,k,c=0,d,m;
    cin>>n;
    while (n--)
    {
        cin>>m;
        if (m-c>15)
        {
            cout<<c+15<<endl;
            return 0;
        }
        c=m;
    }
    if (m+15>90) cout<<90<<endl;
    else cout<<m+15<<endl;
    return 0;
}
