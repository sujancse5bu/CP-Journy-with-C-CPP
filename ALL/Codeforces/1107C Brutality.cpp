/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//
vector <int> v,t;
lli a[600000];//
string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,c=0,d,x=1,y=0,z=0,sum=0;
    cin>>n>>k;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        c+=a[i];
    }
    cin>>s;
    if (k==n)
    {
        cout<<c<<endl;
        return 0;
    }
    for (i=0;i<n-1;i++)
    {
        if (s[i]==s[i+1])
        {
            if (t.size()==0) t.pb(a[i]);
            t.pb(a[i+1]);
        }
        else
        {
            x=t.size();
            if (x>k)
            {
                sort(t.begin(),t.end());
                d=k;
                z=t.size()-1;
                while (d--)
                {
                    sum+=t[z];
                    z--;
                }
                t.clear();
            }
            else if (x==0) sum+=a[i];
            else
            {
                for (j=0;j<t.size();j++) sum+=t[j];
                t.clear();
            }
        }
    }
    x=t.size();
    if (x>k)
    {
        sort(t.begin(),t.end());
        d=k;
        z=t.size()-1;
        while (d--)
        {
            sum+=t[z];
            z--;
        }
        t.clear();
    }
    else if (x==0) sum+=a[i];
    else
    {
        for (j=0;j<t.size();j++) sum+=t[j];
        t.clear();
    }
    cout<<sum<<endl;
    return 0;
}

