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
lli ssss (lli a, lli b)
{
    lli i,j,k,l,n;
    cout<<a<<' '<<b<<' ';
    for (i=a,l=0;i<=b;i++)
    {
        j=0;
        n=i;
        while (1)
        {
            j++;
            if (n==1) break;
            if (n%2==1) n=3*n+1;
            else n=n/2;
        }
        if (l<j) l=j;
    }
    cout<<l<<endl;
}
int main ()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    lli i,j,v,n,k,c,d,e,m,f,g,h=0;
    //cin>>n;
    while ((scanf("%lld %lld",&i,&j))!=EOF)
    {
        ssss(i,j);
    }

    return 0;
}
