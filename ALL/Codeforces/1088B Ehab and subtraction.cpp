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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0,a[100005];
    cin>>n>>k;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    for (i=0;i<n-1;i++)
    {
        b+=a[i];
        if (a[i]!=0)
        {
            cout<<a[i]<<endl;
            m++;
            if (m==k) return 0;
        }
        a[i+1]-=b;
    }
    if (m<k)
    {
        cout<<a[n-1]<<endl;
        m++;
        m=k-m;
        while (m--)
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
