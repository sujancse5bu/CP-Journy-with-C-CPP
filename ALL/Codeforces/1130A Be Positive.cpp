/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> t;//string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,x=0,y=0,z=0,g,h,f,w=126,d;
    cin>>n;
    f(i,0,n-1)
    {
        cin>>j;
        if (j>0) z++;
        else if (j<0) x++;
    }
    y=n/2;
    if (n%2==1) y++;
    if (z>=y) cout<<1<<endl;
    else if (x>=y) cout<<-1<<endl;
    else cout<<0<<endl;
    return 0;
}
