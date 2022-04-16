/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j,v,n,k,c,d,e,m[200]={0},f,g,h=0;
    string s;
    cin>>s;
    n=s.size();
    for (i=0;i<n;i++) m[s[i]]++;
    if (m['n']<3) d=0;
    else if (m['n']<5) d=1;
    else if (m['n']<7) d=2;
    else
    {
        d=3;
        m['n']-=7;
        d+=(m['n']/2);
    }
    if (d>m['i']) d=m['i'];
    if (d>m['e']/3) d=m['e']/3;
    if (d>m['t']) d=m['t'];
    cout<<d<<endl;
    return 0;
}



