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
    lli i,j,v,n,f,k,c,d,e,m,g,h=0;
    cin>>n;
    while (n--)
    {
        cin>>i>>j>>k;
        v=j*(k/2);
        c=i*(k-k/2);
        cout<<c-v<<endl;
    }



    return 0;
}
