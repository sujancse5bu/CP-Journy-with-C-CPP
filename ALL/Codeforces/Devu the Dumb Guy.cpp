///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long long int i,l,n,m,x,a[100000];
    cin>>n>>x;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    for (i=0,m=0;i<n;i++)
    {
        m+=a[i]*x;
        if (x>1) x--;
    }
    cout<<m<<endl;
    return 0;
}
