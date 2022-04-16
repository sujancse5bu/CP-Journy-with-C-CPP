///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,n,m,b,c,s,a[200];
    cin>>n;
    for (i=0,s=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort (a,a+n);
    s/=2;
    for (i=n-1,c=0,b=0;i>=0;b++,i--)
    {
        c+=a[i];
        if (c>s) break;
    }
    cout<<++b<<endl;
    return 0;
}
