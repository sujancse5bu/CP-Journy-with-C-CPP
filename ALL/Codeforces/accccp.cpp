/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> v,t;lli a[600000];//
string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,c,d,x=1,y=0,z=0,sum=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>s;
        if (s[0]=='-' || s[0]=='0') cout<<"Case "<<i+1<<": "<<s<<" is not a valid result"<<endl;
        else cout<<"Case "<<i+1<<": "<<s<<" is a valid result"<<endl;
    }
    return 0;
}

