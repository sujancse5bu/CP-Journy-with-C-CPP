/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector <int> t;
int main ()
{
    fast;
    unsigned lli i,j,n,k,l,m,o,x=0,y=0,z=0,g,h,f,w=121,s=0,d;
    cin>>i>>j>>k;
    cin>>x>>y>>z;
    if (x<i) cout<<"NO"<<endl;
    else
    {
        s=x-i;
        s+=y;
        if (s<j) cout<<"NO"<<endl;
        else
        {
            s-=j;
            s+=z;
            if (s<k) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}

