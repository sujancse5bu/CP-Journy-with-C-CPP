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
    lli i,j,L,v,n,k,c,d,e,f=0,g,h[6000]={0};
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>g;
        h[g]++;
    }
    for (i=0;i<5005;i++) if (h[i]>1) f+=(h[i]-1);
    cout<<f<<endl;


    return 0;
}

