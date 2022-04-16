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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0,a[100003]={0};
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>k;
        a[k]++;
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==0)
        {
            if (b==0)
            {
                cout<<"Possible"<<endl;
                b=1;
            }
            cout<<n-i-1<<endl;
        }
    }
    if (b==0) cout<<"Impossible"<<endl;
    return 0;
}
