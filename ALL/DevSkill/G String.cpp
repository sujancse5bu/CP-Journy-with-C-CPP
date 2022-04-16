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
    lli i,j,k,l,z,x,c,v,b=0,n,m=0,a[300];
    string s;
    cin>>n;
    while (n--)
    {
        for (i=0;i<300;i++) a[i]=0;
        cin>>s;
        l=s.size();
        for (i=0;i<l;i++) a[s[i]]++;
        v=0;
        c=0;
        for (i='a';i<='z';i++)
        {
            if (i=='a' || i=='e' || i=='i' || i=='o' || i=='u') v+=a[i];
            else c+=a[i];
        }
        //cout<<c<<endl;
        //cout<<v<<endl;
        v=max(c,v);
        cout<<l-v<<endl;
    }

    return 0;
}
/// oejwofjeo

