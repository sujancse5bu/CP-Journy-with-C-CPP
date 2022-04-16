/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,k,l,v,n,f,c,d,m,a[120]={0};;
    cin>>n;
    m=n;
    while (n--)
    {
        cin>>v;

        for (i=0;i<v;i++)
        {
            cin>>j;
            a[j]++;
        }
    }
    for (i=0;i<103;i++) if (a[i]==m) cout<<i<<' ';
    cout<<endl;



    return 0;
}

