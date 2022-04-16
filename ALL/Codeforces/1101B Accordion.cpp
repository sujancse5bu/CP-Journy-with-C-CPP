/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
vector <int> v,t;
lli a[600000];
string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m=0,o,c=-1,d=-1,x,y,z;
    cin>>s;
    l=s.size();
    for (i=0;i<l;i++)
    {
        a[s[i]]++;
        if (s[i]=='[') v.pb(i);
        if (s[i]==']') t.pb (i);
    }
    if (a['[']==0) cout<<-1<<endl;
    else if (a[']']==0) cout<<-1<<endl;
    else if (a[':']<2) cout<<-1<<endl;
    else
    {
        x=v.size();
        y=t.size();
        for (i=0;i<x;i++)
        {
            for (j=y-1;j>=0;j--)
            {
                if (t[j]>v[i])
                {
                    c=-1;d=-1;
                    for (o=v[i];o<=t[j];o++)
                    {
                        if (s[o]==':')
                        {
                            c=o;
                            break;
                        }
                    }
                    for (o=t[j]-1;o>=v[i];o--)
                    {
                        if (s[o]==':')
                        {
                            d=o;
                            break;
                        }
                    }
                    if (d>c && d!=-1 && c!=-1)
                    {
                        for (o=c+1;o<d;o++) if (s[o]=='|') m++;
                        k=4+m;
                        cout<<k<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<-1<<endl;
    }
    return 0;
}
