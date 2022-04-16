/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,b=0,n,l,m=0,o,c,z;
    vector <lli> a,d;
    cin>>n;
    cin>>j;
    a.pb(j);
    for (i=1;i<n;i++)
    {
        cin>>l;
        if (i%2==1)
        {
            for (j=0;j<a.size();j++)
            {
                o=d.size();
                d.pb(a[j]-l);
                if (d[o]<-360) d[o]+=360;
                d.pb(a[j]+l);
                if (d[o+1]>360) d[o+1]-=360;
            }
            a.clear();
        }
        else
        {
            for (j=0;j<d.size();j++)
            {
                o=a.size();
                a.pb(d[j]-l);
                if (a[o]<-360) a[o]+=360;
                a.pb(d[j]+l);
                if (a[o+1]>360) a[o+1]-=360;
            }
            d.clear();
        }

    }
    if (a.size())
    {
        for (i=0;i<a.size();i++)
        {
            if (a[i]==0 || a[i]==-360 || a[i]==360)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    else
    {
        for (i=0;i<d.size();i++)
        {
            if (d[i]==0 || d[i]==-360 || d[i]==360)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
