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
    lli i,j,v,f,k,c,d,m,n,l;
    string s;
    cin>>s;
    l=s.size();
    if (l==1)
    {
        cout<<0<<endl;
        return 0;
    }
    for (i=l-1,d=0;i>=0;i--)
    {
        if (s[i]=='1')
        {
            for (j=i;j>=0;j--)
            {
                if (s[j]=='0')
                {
                    s[j]='1';
                    break;
                }
                else s[j]='0';
            }
            if (i!=0) d+=2;
        }
        else d++;
    }
    cout<<d<<endl;
    return 0;
}
