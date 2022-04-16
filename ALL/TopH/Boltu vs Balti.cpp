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
    while (cin>>i>>j)
    {
        if (i>j) swap (i,j);
        i--;
        k=(j*(j+1))/2;
        c=(i*(i+1))/2;
        k-=c;
        cout<<"Sum of "<<i+1<<" to "<<j<<" is -> "<<k<<';'<<endl;
    }
    return 0;
}

