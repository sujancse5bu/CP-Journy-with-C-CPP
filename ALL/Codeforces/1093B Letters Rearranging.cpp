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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0;
    cin>>n;
    while (n--)
    {
        string s;
        lli a[1230]={0};
        cin>>s;
        sort (s.begin(),s.end());
        for (i=0;i<s.size();i++) a[s[i]]++;
        for (i='a',m=0;i<='z';i++) if (a[i]==s.size()) m=1;
        if (m==1) cout<<-1<<endl;
        else cout<<s<<endl;
    }
    return 0;
}

