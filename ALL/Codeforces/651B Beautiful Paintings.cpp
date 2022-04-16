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
    lli i,j,n,k,c[1000],a[1000]={0};
    cin>>n;
    for (i=0;i<n;i++) cin>>c[i];
    sort (c,c+n);
    for (i=0,j=0,k=0;i<n-1;i++)
    {
        if (c[i]<c[i+1]) j++;
        else
        {
            j++;
            k++;
        }
    }
    cout<<k<<endl;

    return 0;
}


