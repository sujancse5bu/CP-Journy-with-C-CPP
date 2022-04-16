/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> t;//lli a[30][30],
lli b[100000],a[100000];
int main ()
{
    fast;
    unsigned lli i,j,n,k,l,m,o,x=1,y=0,z=0,g,h,f,w=121,sum=0,d;
    cin>>n;
    f(i,0,n-1)
    {
        cin>>b[i];
        y+=b[i];
        if (b[i]<w) w=b[i];
    }
    sort(b,b+n);
    z=y;
    r(i,n-1,1)
    {
        d=sqrt(b[i]);
        r(j,d,2)
        {
            if (b[i]%j==0)
            {
                x=y-b[i]-w+w*j+b[i]/j;
                if (z>x) z=x;
            }
        }
    }
    cout<<z<<endl;
    return 0;
}

