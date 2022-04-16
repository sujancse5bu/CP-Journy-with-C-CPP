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
    lli i,j,n,m,a,b,k,c;
    cin>>n>>m>>a>>b;
    k=b/m;
    if (k<a)
    {
        j=n/m;
        j=j*b;
        c=n%m;
        if (c*a<b) j+=c*a;
        else j+=b;
    }
    else j=n*a;
    cout<<j<<endl;
    return 0;
}
