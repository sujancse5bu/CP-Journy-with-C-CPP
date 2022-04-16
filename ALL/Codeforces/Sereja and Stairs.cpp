///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,n,m,a[100000],b[100000];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    sort (a,a+n);
    for (i=0;i<n-2;i++) if (a[i]==a[i+1] && a[i+1]==a[i+2])
    {
        a[i]=0;
        if (i+1==n-1) a[i+1]=0;
    }
    for (i=0;i<n;i++) b[i]=a[i];
    for (i=0,m=0;i<n-1;i++) if (b[i]==b[i+1] && b[i]!=0)
    {
        m++;
        b[i]=0;
        if (i+1==n-1) b[i+1]=0;
    }
    for (i=n-1;i>=0;i--) if (b[i]!=0) m++;

    cout<<m<<endl;
    for (i=0;i<n-1;i++) if (a[i]==a[i+1]&& a[i]!=0)
    {
        cout<<a[i]<<" ";
        a[i]=0;
        if (i+1==n-1) a[i+1]=0;
    }
    for (i=n-1;i>=0;i--) if (a[i]!=0) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

