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
    double p,q;
    cin>>n>>k;
    for (i=0;i<n;i++)
    {
        cin>>c;
        b+=c*1.0;
    }
    p=(b*1.0)/(n*1.0);
    while (1)
    {
        if (p>=(k-0.5))
        {
            cout<<m<<endl;
            break;
        }
        b+=k;
        m++;
        n++;
        p=(b*1.0)/(n*1.0);
        //cout<<p<<endl;
    }
    return 0;
}
