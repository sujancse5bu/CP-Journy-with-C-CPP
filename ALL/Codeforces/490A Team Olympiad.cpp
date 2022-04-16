/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barisal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector <int> a,b,c;
int main ()
{
    fast;
    lli i,j,n,k,l,m=0,o,z;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>o;
        if (o==1) a.pb (i);
        else if (o==2) b.pb (i);
        else c.pb (i);
    }
    z=a.size();
    o=b.size();
    z=min (z,o);
    o=c.size();
    z=min (z,o);
    cout<<z<<endl;
    for (i=0;i<z;i++) cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<endl;
    return 0;
}

