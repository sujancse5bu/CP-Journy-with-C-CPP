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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0;
    cin>>n>>k;
    x=n%6;
    if (x==0) m=k;
    else if (x==1)
    {
        if (k==0) m=1;
        else if (k==1) m=0;
        else m=2;
    }
    else if (x==2)
    {
        if (k==0) m=1;
        else if (k==1) m=2;
        else m=0;
    }
    else if (x==3)
    {
        if (k==0) m=2;
        else if (k==1) m=1;
        else m=0;
    }
    else if (x==4)
    {
        if (k==0) m=2;
        else if (k==1) m=0;
        else m=1;
    }
    else if (x==5)
    {
        if (k==0) m=0;
        else if (k==1) m=2;
        else m=1;
    }
    cout<<m<<endl;
    return 0;
}
