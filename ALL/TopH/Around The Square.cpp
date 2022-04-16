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
    double i,j,l,v,n,f,k,c,d,e,m,g,h=0;
    while (cin>>v>>i>>j>>k>>l)
    {
        c=0.0;
        c+=3.1415926536*i*i*1.0;
        c+=3.1415926536*j*j*1.0;
        c+=3.1415926536*k*k*1.0;
        c+=3.1415926536*l*l*1.0;
        c/=4.0;
        v*=v*1.0;
        v-=c*1.0;
        printf ("%0.3lf\n",v);
    }
    return 0;
}


