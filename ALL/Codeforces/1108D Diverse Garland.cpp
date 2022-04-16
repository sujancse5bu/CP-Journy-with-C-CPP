/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
//vector <int> v,t;//int a[600000];
string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m=0,o,c=-1,d=-1,x,y,z,sum=0;
    cin>>n>>s;
    for (i=0;i<n-2;i++)
    {
        if (s[i]==s[i+1])
        {
            if (s[i]==s[i+2])
            {
                if (s[i]=='B') s[i+1]='G';
                else if (s[i]=='G') s[i+1]='B';
                else s[i+1]='G';
            }
            else
            {
                if (s[i]=='B' && s[i+2]=='G') s[i+1]='R';
                else if (s[i]=='G' && s[i+2]=='B') s[i+1]='R';
                else if (s[i]=='G' && s[i+2]=='R') s[i+1]='B';
                else if (s[i]=='R' && s[i+2]=='G') s[i+1]='B';
                else if (s[i]=='R' && s[i+2]=='B') s[i+1]='G';
                else if (s[i]=='B' && s[i+2]=='R') s[i+1]='G';
            }
            m++;
        }
    }
    if (n>1 && s[n-1]==s[n-2])
    {
        if (s[n-1]=='B') s[n-1]='G';
        else if (s[n-1]=='G') s[n-1]='B';
        else s[n-1]='G';
        m++;
    }
    cout<<m<<endl<<s<<endl;
    return 0;
}

