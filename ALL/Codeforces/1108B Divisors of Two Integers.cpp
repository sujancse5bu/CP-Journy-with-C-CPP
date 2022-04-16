/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//
vector <int> v,t,q;//
lli a[600000];//string s;
void dvsrn (lli n)
{
    lli i,j;
    j=sqrt(n);
    for (i=1;i<=j;i++)
    {
        if (n%i==0)
        {
            q.pb(i);
            if (n/i!=i) q.pb(n/i);
        }
    }
    j=q.size();
    sort (q.begin(),q.end());
}
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,c,d,x=1,y=0,z=0,sum=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>o;
        v.pb(o);
    }
    sort(v.begin(),v.end());
    if (v[n-1]==v[n-2])
    {
        cout<<v[n-1]<<' '<<v[n-2]<<endl;
        return 0;
    }
    else cout<<v[n-1]<<' ';
    dvsrn (v[n-1]);
    v[n-1]=-1;
    for (i=0,j=0;i<n-1 && j<q.size();)
    {
        if (q[j]==v[i])
        {
            v[i]=-1;
            i++;
            j++;
        }
        else if (q[j]<v[i]) j++;
        else i++;
    }
    sort (v.begin(),v.end());
    cout<<v[n-1]<<endl;
    return 0;
}

