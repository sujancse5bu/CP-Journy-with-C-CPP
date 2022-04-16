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
    lli s=0,a,y,b,x,yo,z;
    cin>>yo>>b>>x>>y>>z;
    a=x*2+y;
    if (a>yo) s=a-yo;
    a=y+z*3;
    if (a>b) s+=(a-b);
    cout<<s<<endl;
    return 0;
}
