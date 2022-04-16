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
#include <stdio.h>
#define lli long long int
using namespace std;
int main ()
{
    lli i,j,n,d=0,k=0,c=0;
    string s;/// 48,49,50,51,52,53,54,55,56,57
    cin>>n>>s;
    for (i=0;i<n;i++) if (s[i]=='8') k++;
    j=n-k;
    cout<<k<<endl<<j<<endl;
    while (k>0)
    {
        d=n/10;
        if (c<d) c=d;
        k--;
        j++;
    }
    cout<<c<<endl;
    return 0;
}
