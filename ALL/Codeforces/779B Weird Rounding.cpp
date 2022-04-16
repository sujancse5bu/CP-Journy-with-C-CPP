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
    string s;
    cin>>s>>k;
    l=s.size();
    for (i=l-1;i>0;i--)
    {
        if (s[i]=='0') m++;
        else b++;
        if (m==k)
        {
            cout<<b<<endl;
            return 0;
        }
    }
    cout<<l-1<<endl;
    return 0;
}

