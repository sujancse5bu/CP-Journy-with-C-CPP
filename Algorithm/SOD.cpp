/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
lli sod (lli n)
{
    lli s=0;
    for (int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0) 
        {
            if (n/i==i) s+=i;
            else s+=(n/i+i);
        }
    }
    return s+1+n;
}
int main ()
{
    fast;
    cout<<sod(10000000)<<endl;
    return 0;
}

