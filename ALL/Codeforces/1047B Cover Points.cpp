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
    lli i,j,n,k,c;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>j>>k;
        a[i]=j+k;
    }
    sort (a,a+n);
    cout<<a[n-1]<<endl;
    return 0;
}
