/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
lli lp (lli n)
{
    lli j=0;
    if (n%400==0) j=1;
    else if (n%100!=0 && n%4==0) j=1;
    return j;
}
int main ()
{
    fast;
    lli i,j,k,l,l1,f1,f,z,x,y,c,v,b=0,n,m=0;
    cin>>n;
    j=lp(n);
    if (j==0)
    {
        //cout<<n+6<<endl;
        //return 0;
    }
    f1=1;
    if (j==0) l1=1;
    else l1=2;
    x=f1;
    cout<<n<<' '<<f1<<' '<<l1<<endl;
    for (i=n+1;;i++)
    {

        z=lp(i);
        f=x+1;
        if (f>7) f=f%7;
        if (z==0)
        {
            l=x+1;
            if (l>7) l=l%7;
        }
        else
        {
            l=x+2;
            if (l>7) l=l%7;
        }
        x=f;
        cout<<i<<' '<<f<<' '<<l<<endl;
        if (f==f1 && l==l1 && j==z)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
/// <<z<<' '<<f<<' '<<l

