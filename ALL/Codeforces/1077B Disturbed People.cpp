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
    lli i,j,v,n,f,k,c[200],d,e,m,g,h=0;
    cin>>n;
    for (i=0;i<n;i++) cin>>c[i];
    for (i=0,k=0;i<n;)
    {
        if (c[i]==1 && c[i+1]==0 && c[i+2]==1)
        {
            k++;
            i+=3;
        }
        else i++;
    }
    cout<<k<<endl;
    return 0;
}
