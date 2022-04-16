/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//lli b[200000],c[200000],d[200000];////string s,t;vector <int> t;lli a[30][30],b[2000];
int main ()
{
    fast;
    unsigned lli i,j,n,k,l,m,o,x=1,y=0,z=0,g,h,f,w=0,sum=0,d;
    cin>>n>>m>>k;
    lli a[n+1];
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    /*if (k==1)
    {
        d=m*a[n-1];
        cout<<d<<endl;
    }
    else*/
    {
        z=m/(k+1);
        x=m%(k+1);
        y=a[n-1]*k;
        y*=z;
        y+=(a[n-2]*z);
        y+=(x*a[n-1]);
        cout<<y<<endl;
    }
    return 0;
}

