/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//lli b[200000],c[200000],d[200000];////string s,t;vector <int> t;lli a[30][30],b[2000];
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,x=1,y=0,z=0,g,h,f,w=0,sum=0;
    cin>>n;
    if (n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    lli a[n+1],b[n+1];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]>y) y=a[i];

    }
    for (i=0,j=0;i<n-1;i++)
    {
        if (a[i]==a[i+1] && a[i]==y) x++;
        else if (x>=1)
        {
            b[j]=x;
            j++;
            x=1;
        }
    }
    b[j]=x;
    j++;
    sort (b,b+j);
    cout<<b[j-1]<<endl;
    return 0;
}

