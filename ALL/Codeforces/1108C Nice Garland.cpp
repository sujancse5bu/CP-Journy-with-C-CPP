/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fast ios :: sync_with_stdio(false); cin.tie(0);
using namespace std;
//vector <int> v,t;
//int a[600000];//
string s;
int main ()
{
    fast;
    lli i,j,n,k,l,m=0,o,c=-1,d=-1,x,y,gi=0,bi=0,ri=0,gm,bm,rm,g[4]={0},b[4]={0},r[4]={0},sum=0;
    cin>>n>>s;
    for (i=0;i<n;i++)
    {
        if (s[i]=='G')
        {
            if (i%3==0) g[0]++;
            else if (i%3==1) g[1]++;
            else g[2]++;
        }
        else if (s[i]=='R')
        {
            if (i%3==0) r[0]++;
            else if (i%3==1) r[1]++;
            else r[2]++;
        }
        else
        {
            if (i%3==0) b[0]++;
            else if (i%3==1) b[1]++;
            else b[2]++;
        }
    }
    gm=g[0];
    rm=r[0];
    bm=b[0];
    for (i=0;i<3;i++)
    {
        if (gm<g[i])
        {
            gm=g[i];
            gi=i;
        }
        if (bm<b[i])
        {
            bm=b[i];
            bi=i;
        }
        if (rm<r[i])
        {
            rm=r[i];
            ri=i;
        }
    }
    for (i=0;i<n;i++)
    {
        if (s[i]=='B')
        {

        }
    }
    return 0;
}
