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
    lli i,j=0,n,k,c,ax,ay,bx,by,cx,cy;///ax ay place of queen, bx by place of king
    cin>>n>>ax>>ay>>bx>>by>>cx>>cy;
    if (ax>bx && ax<cx) j=9;
    else if (ax<bx && ax>cx) j=9;
    else if (ay<by && ay>cy) j=9;
    else if (ay>by && ay<cy) j=9;
    if (j==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    return 0;
}
