/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> v,t;//int a[600000];//string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,c,d,x,y,z,sum=0;
    cin>>k;
    for (i=0;i<k;i++)
    {
        string s;
        cin>>n;
        cin>>s;
        if (n==2)
        {
            if (s[0]<s[1]) cout<<"YES"<<endl<<2<<endl<<s[0]<<' '<<s[1]<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl<<2<<endl<<s[0]<<' ';
            for (j=1;j<n;j++) cout<<s[j];
            cout<<endl;
        }
    }




    return 0;
}
