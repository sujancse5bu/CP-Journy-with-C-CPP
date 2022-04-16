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
#include <math.h>
#define lli long long int
using namespace std;
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,n,c=0,d=0,h[200];
    string s;
    cin>>s;
    n=s.size();
    c=n;
    for (i=0;i<n;i++)
    {
        if (s[i]=='.')
        {
            c=i;
            break;
        }
    }
    if (s[0]=='-')
    {
        d=c-1;
        d=d%3;
        d=4-d;
        cout<<"($";
        for (i=1;i<c;d++,i++)
        {
            cout<<s[i];
            if (d%3==0 && d<c) cout<<",";
        }
        cout<<".";
        if (n-c==0) cout<<"00"<<")"<<endl;
        else if (n-c==2) cout<<s[c+1]<<"0"<<")"<<endl;
        else cout<<s[c+1]<<s[c+2]<<")"<<endl;
    }
    else
    {
        d=c%3;
        d=4-d;
        cout<<"$";
        for (i=0;i<c;d++,i++)
        {
            cout<<s[i];
            if (d%3==0 && d<=c) cout<<",";
        }
        cout<<".";
        if (n-c==0) cout<<"00"<<endl;
        else if (n-c==2) cout<<s[c+1]<<"0"<<endl;
        else cout<<s[c+1]<<s[c+2]<<endl;
    }
    return 0;
}


