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
    lli i,j,v,n,s,k,c,d,e,m,f,g,h=0;
    cin>>n>>s;
    if (n==1 && s==0) cout<<0<<' '<<0<<endl;
    else if (n>1 && s==0) cout<<"-1"<<' '<<"-1"<<endl;
    else if (s/9>n) cout<<"-1"<<' '<<"-1"<<endl;
    else if (s/9==n && s%9>0) cout<<"-1"<<' '<<"-1"<<endl;
    else
    {
        d=s/9;
        e=d;
        v=n;
        if (s%9>0)
        {
            cout<<s%9;
            n--;
        }
        while (n>0 && n>d)
        {
            cout<<0;
            n--;
        }
        while (d>0)
        {
            cout<<9;
            n--;
            d--;
        }
        cout<<' ';
        while (e--)
        {
            cout<<9;
            v--;
        }
        if (v>0)
        {
            cout<<s%9;
            v--;
        }
        while (v--)
        {
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
