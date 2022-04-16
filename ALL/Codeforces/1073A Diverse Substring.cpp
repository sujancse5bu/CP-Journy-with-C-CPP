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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0,a[130]={0};
    string s;
    cin>>n>>s;
    for (i=0;i<n;i++) a[s[i]]++;
    for (i=0,j=0;i<130;i++) if (a[i]>n/2) j=1;
    if (j==1) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for (i=0,j=0;i<n;i++)
        {
            if (a[s[i]]!=0)
            {
                cout<<s[i];
                a[s[i]]=0;
                j++;
            }
            if (j==n/2) break;
        }
    }
    return 0;
}
