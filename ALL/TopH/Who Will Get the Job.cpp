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
    lli i,j,v,n,f,k,c,d,e,m,g,h=0;
    while (cin>>j)
    {
        c=0;
        while (j--)
        {
            cin>>i;
            if (i>c) c=i;
        }
        cout<<c<<endl;
    }
    return 0;
}


