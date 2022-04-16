/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j,n,m,b,k,c[200];
    cin>>n>>m;
    for (i=0,k=0;i<n;i++) cin>>c[i];
    sort (c,c+n);
    j=c[n-1]+m;
    for (i=n-2,k=0;i>=0;i--)
    {
        b=c[n-1]-c[i];
        if (b<=m)
        {
            c[i]+=b;
            m-=b;
        }
        else
        {
            c[i]+=m;
            break;
        }
    }
    if (m>0) cout<<m<<endl;
    sort (c,c+n);
    cout<<c[0]<<" "<<j<<endl;
    return 0;
}
