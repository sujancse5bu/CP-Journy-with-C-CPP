/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> v,t;
lli a[600000];//
//string s,t;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,c,d,x=1,y=0,z=0,sum=0;
    double p,q,b[100001];
    cin>>n>>k>>m;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort (a,a+n);
    for (i=0,z=n;i<n;i++,z--,m--)
    {
        if (z*k<=m) y=z*k;
        else y=m;
        q=((sum+y)*1.0)/z*1.0;
        sum-=a[i];
        b[i]=q;
    }
    sort (b,b+n);
    printf ("%0.20lf\n",b[n-1]);
    return 0;
}
