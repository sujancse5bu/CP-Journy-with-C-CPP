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
lli myXOR(lli x, lli y);
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j=0,L,v,n,k,c,d,e,f,g,h,a[3];
    while (1)
    {
        cin>>i>>j;
        cout<<j-myXOR(j,i)-i<<endl;
    }


    return 0;
}
lli myXOR(lli x, lli y)
{
    int res = 0;
    for (int i = 31; i >= 0; i--)
    {
        bool b1 = x & (1 << i);
        bool b2 = y & (1 << i);
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}
