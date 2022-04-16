///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
#include<vector>
#define lli long long int
using namespace std;
int main ()
{
    lli i,j,n,k,c;
    vector <lli> a;
    cin>>n>>k;
    for (i=0;i<n;i++)
    {
        cin>>c;
        a.push_back(c);
    }
    c=a[0];
    for (i=1,j=0;i<n;i++)
    {
        if (j==k)
        {
            cout<<c<<endl;
            return 0;
        }
        if (c>a[i]) j++;
        else
        {
            c=a[i];
            j=1;
        }
    }
    sort (a.begin(),a.end());
    cout<<a[n-1]<<endl;

    return 0;
}
