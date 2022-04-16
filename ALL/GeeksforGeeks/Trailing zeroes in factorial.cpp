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
    lli i,v,n,f,k,c,d,m;
    cin>>n;
    while (n--)
    {
        cin>>v;
        c=0;
        for (i=1;;i++)
        {
            k=pow(5,i);
            if (v/k==0) break;
            c+=(v/k);
        }
        cout<<c<<endl;
    }
    return 0;
}
