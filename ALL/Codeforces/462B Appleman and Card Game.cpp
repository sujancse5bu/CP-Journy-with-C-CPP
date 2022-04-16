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
    lli i,j,n,m,s,b,k=0,c[92]={0};
    string a;
    cin>>n>>k>>a;
    for (i=0;i<n;i++) c[a[i]]++;
    sort (c,c+92);
    //cout<<c[91]<<endl;
    for (i=91,s=0;i>=0;i--)
    {
        if (k>=c[i])
        {
            s+=(c[i]*c[i]);
            k-=c[i];
            //cout<<c[i]<<endl;
        }
        else
        {
            s+=(k*k);
            k=0;
        }

        if (k==0) break;
    }
cout<<s<<endl;
    return 0;
}

