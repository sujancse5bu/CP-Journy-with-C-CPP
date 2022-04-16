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
    lli i,j=0,L,v,n,k,c,d,e,f,g,h,a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort (a,a+3);
    if (a[0]+a[1]==a[2]) j=1;
    else if (a[0]+a[1]<a[2]) j=a[2]-(a[0]+a[1])+1;
    cout<<j<<endl;




    return 0;
}
