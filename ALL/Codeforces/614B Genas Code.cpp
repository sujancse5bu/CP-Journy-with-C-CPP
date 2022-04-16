/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int/// 1 1000000000000000000
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,k,l,z,x,r,c,b=1,n,m=0;
    string s;
    cin>>n;
    while (n--)
    {
        cin>>s;
        if (s[0]=='0')
        {
            cout<<0<<endl;
            return 0;
        }
        for (i=s.size()-1,r=0,k=0,c=0;i>=0;i--)
        {
            if (s[i]=='0')
            {
                m++;
                r=1;
            }
            if (s[i]!='0' && r==1)
            {
                s[i+1]='.';
                break;
            }
        }
        c=0;
        if (r==1)
        {
            for (i=0;s[i]!='.';i++)
            {
                c+=(s[i]-48);
                c*=10;
            }
            if (c>0) c/=10;
        }
        else
        {
            for (i=0;i<s.size();i++)
            {
                c+=(s[i]-48);
                c*=10;
            }
            if (c>0) c/=10;
        }
        b*=c;
        //cout<<m<<endl;
    }
    cout<<b;
    while (m--) cout<<0;
    cout<<endl;
    return 0;
}

