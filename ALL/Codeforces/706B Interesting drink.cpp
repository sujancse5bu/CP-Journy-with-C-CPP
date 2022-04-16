/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
lli a[1000006];
lli binarySearch(lli x,lli h)
{
    lli m,l=0,f=h,p,d=0;
    while(l<=h)
    {
        m=(l+h)/2;
        if (x==a[m]) return m+1;
        //cout<<h<<' '<<l<<' '<<m<<endl;
        if (h<10 || h-l<10)
        {
            p=min(l,h);
            d=max(p,d);

            for (;d<=h+1;d++) if (a[d]>x) return d;

        }
        else if (x<a[m]) h=m;
        else l=m;
    }
    //return h+1; //search value not found
}
int main ()
{
    fast;
    lli i,j,k,l,z,x,c,v,b=0,n;
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    /*for (i=0;i<n;i++) cout<<a[i]<<' ';
    cout<<endl;*/
    cin>>x;
    lli m[x+1];
    for (i=0;i<x;i++) cin>>m[i];
    for (i=0;i<x;i++)
    {
        if (m[i]<a[0]) cout<<0<<endl;
        else if (m[i]>=a[n-1]) cout<<n<<endl;
        else cout<<binarySearch(m[i],n-1)<<endl;
    }
    //cout<<binarySearch(x,n-1)<<endl;
    return 0;
}

