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
    lli a,b,c,v,n,f,k,d,m;
    cin>>a>>b>>c;
    a=a%b;
    for (int i=1;i<1000000;i++)
    {
        a*=10;
        v=a/b;
        a=a%b;
        if (v==c)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

