/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
int main ()
{
    fast;
    lli i,j,n,l,m=0,o,p,q,c=0,z=0;
    string s;
    cin>>s>>n;
    l=s.size();
    for (i=0;i<l;i++)
    {
        if (s[i]=='*') z++;
        else if (s[i]=='?') c++;
    }
    o=z+c;
    p=l-o*2;
    q=l-o;
    if (p>n) cout<<"Impossible"<<endl;
    else if (q==n)
    {
        for (i=0;i<l;i++) if (s[i]!='*' && s[i]!='?') cout<<s[i];
        cout<<endl;
    }
    else if (p==n)
    {
        for (i=0;i<l-1;i++)
        {
            if (s[i]!='*' && s[i]!='?' && s[i+1]!='*' && s[i+1]!='?') cout<<s[i];

        }
        if (s[i]!='*' && s[i]!='?') cout<<s[i];
        cout<<endl;
    }
    else if (n<q)
    {
        m=q-n;
        for (i=0;i<l-1;i++)
        {
            if (m>0)
            {
                if (s[i+1]=='*' || s[i+1]=='?')
                {
                    m--;
                    i++;
                }
                else cout<<s[i];
            }
            else if (s[i]!='*' && s[i]!='?') cout<<s[i];
        }
        if (s[i]!='*' && s[i]!='?') cout<<s[i];
        cout<<endl;
    }
    else
    {
         if (z==0) cout<<"Impossible"<<endl;
         else
         {
             m=n-q;
             for (i=0;i<l;i++)
             {
                 if (s[i]!='*' && s[i]!='?') cout<<s[i];
                 else if (m!=0 && s[i]=='*')
                 {
                     for (j=0;j<m;j++)
                     {
                         cout<<s[i-1];
                     }
                     m=0;
                 }
             }
             cout<<endl;
         }
    }
    return 0;
}
