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
    lli i,j=0,x=0,y,g,v,n;
    double f,k=0,c,d=1,m;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>f;
        c=f*f*2*3.1416;
        f=f*f*8.0;
        f-=c;
        printf ("Case %lld: %.2lf\n",i,f);
    }
    return 0;
}


