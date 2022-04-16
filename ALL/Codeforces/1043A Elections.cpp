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
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>h[i];
        c+=h[i];
    }
    sort (h,h+n);
    for (i=0;i<n;i++) d+=(h[n-1]-h[i]);
    if (d>c) cout<<h[n-1]<<endl;

    else
    {
        c-=d;
        c=(c/n+1);
        h[n-1]+=c;
        cout<<h[n-1]<<endl;
    }

    return 0;
}
