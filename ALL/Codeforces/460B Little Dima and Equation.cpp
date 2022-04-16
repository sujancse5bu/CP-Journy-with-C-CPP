/*
************************************************
***               OmShantihari               ***
***           Author: Sujan Mridha           ***
***   CSE 5th batch, University of Barishal  ***
************************************************
*/
#include <iostream>
#include <algorithm>
#include<math.h>
#define lli long long int
using namespace std;
lli dgtsm (lli a)
{
    lli s=0;
    while (a>0) {s+=a%10;a/=10;}
    return s;
}
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j,n,k=0,a,b,x=0,y,c,d[100000];
    cin>>a>>b>>c;
    for (x=0,n=0;k<1000000;x++)
    {
        y=dgtsm(x);
        k=b*pow(y,a)+c;
        //if (x==k)
        cout<<k<<endl;
    }


    return 0;
}
