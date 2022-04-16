/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j=0,n,l,m=0,x,y,o,c,z;
    cin>>n>>m>>x>>y>>o>>c;
    for (i=m;i>0;i--)
    {
        n+=i;
        if (i==y)
        {
            n-=x;
            if (n<0) n=0;
        }
        else if (i==c)
        {
            n-=o;
            if (n<0) n=0;
        }
    }
    cout<<n<<endl;
    return 0;
}
