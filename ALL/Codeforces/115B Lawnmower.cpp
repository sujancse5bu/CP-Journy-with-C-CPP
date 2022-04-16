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
    lli i,j,v,n,m,f,k=0,c,d;
    cin>>n>>m;
    string s[n];
    for (i=0;i<n;i++)
    {
        cin>>s[i];
        for (j=0;j<m;j++) if (s[i][j]=='W')  k++;
    }
    cout<<k<<endl;
    return 0;
}
