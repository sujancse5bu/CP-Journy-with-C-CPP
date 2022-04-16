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
    lli i,j,v,n,k,c,d,e,m,f,g,h=0;
    string s;
    cin>>s;
    n=s.size();
    for (i=0;i<n;i++) h+=(s[i]-48);
    if (n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    else f=1;
    while (h>9)
    {
        g=0;
        f++;
        while (h>0)
        {
            g+=(h%10);
            h/=10;
        }
        h=g;
    }
    cout<<f<<endl;
    return 0;
}

