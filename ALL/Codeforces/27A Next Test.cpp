/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<stdio.h>
#define lli long long int
using namespace std;
int main ()
{
    lli i,j,n,m,v,b[10000];
    cin>>n;
    for (i=0;i<n;i++) cin>>b[i];
    sort (b,b+n);
    for (i=0;i<n;i++) if (b[i]!=i+1)
    {
        cout<<i+1<<endl;
        return 0;
    }
    cout<<n+1<<endl;
    return 0;
}
