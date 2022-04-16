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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0,a[120];
    string s;
    cin>>s;
    n=s.size();
    if (n%2==0) l=n/2-1;
    else l=n/2;
    for (i=0,b=l-1,c=l+1;n--;i++)
    {
        if (i==0) cout<<s[l];
        else if (i%2==0)
        {
            cout<<s[b];
            b--;
        }
        else
        {
            cout<<s[c];
            c++;
        }
    }
    return 0;
}
