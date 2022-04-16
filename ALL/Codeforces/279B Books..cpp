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
    lli i,j,k,e,f,g,h,n,m;
    cin>>n>>m;
    lli a[n],b[100000];
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0,k=0;i<n;i++)
    {
        for (j=i,e=1,f=0;j<n;j++,e++)
        {
            f+=a[j];
            if (f>m)
            {
                b[k]=e-1;
                k++;
                break;
            }
            else if (f==m || j==(n-1))
            {
                b[k]=e;
                k++;
                break;
            }
        }
        if (b[k-1]==n)
        {
            cout<<b[k-1]<<endl;
            return 0;
        }
    }
    sort (b,b+k);
    cout<<b[n-1]<<endl;
    return 0;
}

