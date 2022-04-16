/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,k,l,z,x,c,v,b=0,n,m=0;
    cin>>n;
    for (i=0,k=1,j=1;j<n;i++)
    {
        if (j<3) j++;
        else if (j>2)
        {
            v=(j-k);
            j+=v;
            k++;
        }
        //cout<<j<<endl;
    }
    cout<<i<<endl;
    return 0;
}

