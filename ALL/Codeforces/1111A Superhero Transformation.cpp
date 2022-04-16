/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;//vector <int> v,t;lli a[600000];//
string s,t;
int main ()
{
    fast;
    lli i,j,n,k,l,m,o,c,d,x=1,y=0,z=0,sum=0;
    cin>>s>>t;
    l=s.size();
    m=t.size();
    if (l!=m) cout<<"No"<<endl;
    else
    {
        for (i=0;i<l;i++)
        {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if (t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
            else if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
            {
                if (t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
        cout<<"Yes"<<endl;
    }


    return 0;
}
