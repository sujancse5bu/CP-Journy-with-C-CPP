/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector <int> v;
lli a[600000],b[600000];
int main ()
{
    fast;
    lli i,j,n,l,m=0,x,y,o,c,z;
    cin>>n;
    for (i=0;i<n;i++)
    {
        m=0;
        string s;
        cin>>s;
        for (j=0;j<s.size();j++)
        {
            if (s[j]=='(') m++;
            else if (s[j]==')') m--;
        }
        v.pb(m);

    }
    sort (v.begin(),v.end());

    for (i=0;i<v.size();i++)
    {
        if (v[i]<0)
        {
            x=abs(v[i]);
            a[x]++;
        }
        else
        {
            x=abs(v[i]);
            b[x]++;
        }
    }
    for (i=0,m=0;i<500005;i++) m+=min(a[i],b[i]);
    m+=(b[0]/2);
    cout<<m<<endl;
    return 0;
}

