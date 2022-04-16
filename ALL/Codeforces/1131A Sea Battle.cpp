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
    f(i,0,3) cin>>a[i];
    y=a[0];
    y+=a[1]*2;
    y+=a[2];
    y+=a[3]*2;
    y+=4;
    if (a[0]-a[2]>=1) y+=(a[0]-a[2]);
    //else if (a[0]-a[2]>1) y+=(a[0]-a[2]);
    cout<<y<<endl;
    return 0;
}

