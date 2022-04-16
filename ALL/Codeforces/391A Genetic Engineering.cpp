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
    l=s.size();
    for (i=1,b=1;i<l;i++)
    {
        if (s[i-1]==s[i]) b++;
        else
        {
            if (b%2==0) m++;
            b=1;
        }
    }
    if (b%2==0) m++;
    cout<<m<<endl;
    return 0;
}

