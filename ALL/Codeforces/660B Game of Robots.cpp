/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define pi 3.141592654
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;///string s;vector <int> a,t[200005];
lli b[200003];
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,x=0,y=0,z=0,g=0,h,f,w=0;
    cin>>n>>k;
    f(i,0,n-1) cin>>b[i];
    for (i=1;;i++)
    {
        o=(i*(i+1))/2;
        if (o>=k)
        {
            i--;
            z=(i*(i+1))/2;
            z=k-z;
            cout<<b[z-1]<<endl;
            return 0;
        }
    }
    return 0;
}

