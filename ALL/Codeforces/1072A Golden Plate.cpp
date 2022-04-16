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
    lli i,j,L,v,n,k,c,d,e,f,g,h=0;
    cin>>c>>d>>n;
    while (n--)
    {
        if (c<1 || d<1) break;
        h+=(c*2+d*2-4);
        c-=4;
        d-=4;
    }
    cout<<h<<endl;












    return 0;
}
