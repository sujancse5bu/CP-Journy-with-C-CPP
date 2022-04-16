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
    lli i,j,v,n,k,c[30000],d[3000],e,m,f,g,h=0;
    cin>>n;
    for (i=0;i<n;i++) cin>>c[i];
    for (i=0,k=0,e=0;i<n-1;i++)
    {
        if (c[i+1]-c[i]==1) k++;
        else
        {
            d[e]=k;
            e++;
            k=0;
        }
        if (i==n-2)
        {
            d[e]=k;
            e++;
        }
    }
    //for (i=0;i<e;i++) cout<<d[i]<<endl;
    sort (d,d+e);
    //cout<<d[e-1]<<endl;

    if (n>2)
    {
        if (c[1]-c[0]!=1 || c[n-1]-c[n-2]!=1) d[e-1]--;
    }
    cout<<d[e-1]<<endl;
    return 0;
}
