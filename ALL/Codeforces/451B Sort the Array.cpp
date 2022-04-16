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
    lli i,j,v,n,k,c,d,e,m,f,g,h=0;
    cin>>n;
    lli a[n];
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n-1;i++)
    {
        if (h==2)
        {
            cout<<"no"<<endl;
            return 0;
        }
        if (a[i]>a[i+1])
        {
            h++;
            d=a[i+1];
            a[i+1]=a[i];
            a[i]=d;
            e=a[i+1];
        }
    }
    if (h==1)  cout<<"yes"<<endl<<a[i]<<' '<<a[i]<<endl;
    else  cout<<"yes"<<endl<<d<<' '<<e<<endl;
    return 0;
}
