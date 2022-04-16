/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> v,t;
lli p[600000],a[200000],b[200000],c[200000],d[200000];////string s,t;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,x=1,y=0,z=0,w=0,sum=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>p[i];
        if (i%2==0)
        {
            a[i]+=p[i];
            a[i]+=z;
            z=a[i];
        }
        else
        {
            b[i]+=p[i];
            b[i]+=w;
            w=b[i];
        }
    }
    for (i=n-1,z=0,w=0;i>=0;i--)
    {
        if (i%2==0)
        {
            c[i]+=p[i];
            c[i]+=w;
            w=c[i];
        }
        else
        {
            d[i]+=p[i];
            d[i]+=z;
            z=d[i];
        }
    }
    for (i=0,x=0,y=0;i<n;i++)
    {
        if (i%2==0)
        {
            x=a[i]-p[i];
            x+=d[i+1];
            y=b[i-1];
            y+=(c[i]-p[i]);
        }
        else
        {
            x=a[i-1];
            x+=(d[i]-p[i]);
            y=(b[i]-p[i]);
            y+=c[i+1];
        }
        if (x==y) sum++;
    }
    cout<<sum<<endl;
    return 0;
}

