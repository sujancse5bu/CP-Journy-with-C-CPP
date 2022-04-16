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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0,a[300];
    string s;
    cin>>n;
    while (n--)
    {
        cin>>s;
        for (i=0;i<150;i++) a[i]=0;
        l=s.size();
        for (i=0;i<l;i++) a[s[i]]++;
        //for (i=90;i<125;i++) if (a[i]>0) cout<<a[i]<<' ';
        if (a['p']>0 && a['r']>1 && a['o']>0 && a['g']>1 && a['a']>0 && a['m']>1 && a['n']>0 && a['i']>0) cout<<"Yes"<<endl;
        else if (a['c']>0 && a['o']>0 && a['d']>0 && a['i']>0 && a['n']>0 && a['g']>0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}


