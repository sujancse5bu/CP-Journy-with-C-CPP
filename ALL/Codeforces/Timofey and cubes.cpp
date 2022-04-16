///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int a[1000000];
int main ()
{
    long long int i,j,l,n,m,x;
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0,j=n-1;i<j;i+=2,j-=2)
    {
        x=a[i];
        a[i]=a[j];
        a[j]=x;
    }
    for (i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
