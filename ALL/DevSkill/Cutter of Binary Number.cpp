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
    lli q,a,i,j,k,l,z,x,c,v,b=0,n,m=0;
    vector <int> t,u;
    cin>>n;
    while (n--)
    {
        t.clear();
        u.clear();
        cin>>q>>a>>b;
        while (q>0)
        {
            t.pb(q%2);
            q=q/2;
        }
        for (i=t.size();i<=32;i++) t.pb(0);
        for (i=a-1;i<b;i++) u.pb(t[i]);
        for (i=0,m=0;i<u.size();i++) m+=((u[i])*pow(2,i));
        cout<<m<<endl;
    }
    return 0;
}

