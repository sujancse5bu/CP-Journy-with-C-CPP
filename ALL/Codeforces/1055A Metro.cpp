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
#define pb bush_back
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,a[2000],b[2000],j,v,n,k,c,d,e,m,f,g,h=0;
    cin>>n>>k;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n;i++) cin>>b[i];
    if (a[0]==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if (a[k-1]==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for (i=k-1,v=0;i<n;i++) if (a[i]==1 && b[i]==1 && b[k-1]==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;
    return 0;
}
