/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> v,t;lli p[600000],q[10000];////string s,t;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,c,d,a,b,x=1,y=0,z=0,sum=0;
    cin>>d;
    while (d--)
    {
        cin>>n>>a>>b;
        if (a*2<b) cout<<n*a<<endl;
        else
        {
            y=n/2;
            if (n%2==1)
            {
                y*=b;
                y+=a;
            }
            else y*=b;
            cout<<y<<endl;
        }

    }
    return 0;
}
