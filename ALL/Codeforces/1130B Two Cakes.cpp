/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define f(i,a,b) for(i=a;i<=b;i++)
#define r(i,a,b) for(i=a;i>=b;i--)
#define bn begin()
#define en end()
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;////string s;
vector <int> t;
lli a[200002][2];
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,x=0,y=0,z=0,g,h,f,w=126,d;
    cin>>n;
    t.resize(n*2);
    f(i,0,n*2-1)
    {
        cin>>t[i];
        if (a[t[i]][0]==0) a[t[i]][0]=i+1;
        else a[t[i]][1]=i+1;
    }
    y=1;
    //f(i,1,n) cout<<i<<' '<<a[i][0]<<' '<<a[i][1]<<endl;
    f(i,1,n)
    {
        if (a[i][0]<a[i][1])
        {
            x+=abs(a[i][0]-y);
            y=a[i][0];
            a[i][0]=0;
        }
        else
        {
            x+=abs(a[i][1]-y);
            y=a[i][1];
            a[i][1]=0;
        }

    }
    y=1;
    f(i,1,n)
    {
        if (a[i][0]!=0)
        {
            x+=abs(a[i][0]-y);
            y=a[i][0];
            a[i][0]=0;
        }
        else
        {
            x+=abs(a[i][1]-y);
            y=a[i][1];
            a[i][1]=0;
        }
    }
    cout<<x<<endl;
    return 0;
}

