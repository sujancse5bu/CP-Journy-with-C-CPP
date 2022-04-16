///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    int i,j,k,l,n,s,a[100000];
    cin>>n>>k;
    if (k>=n)
    {
        cout<<1<<endl<<n<<endl;
        return 0;
    }
    l=n/(k*2+1);
    if (n%(k*2+1)>0) l++;
    cout<<l<<endl;
    if (l==0) return 0;
    l=(2*k+1);
    if (k==0) for (i=1;i<=n;i++) cout<<i<<" ";
    else if (n%l==0) for (i=k+1;i<n;i+=(2*k+1)) cout<<i<<" ";
    else if (n%l>k)
    {
        s=n%l;
        for (i=k+1;i<=n;i+=(2*k+1))  cout<<i<<" ";
    }
    else
    {
        s=n%l;
        for (i=k+1,j=0;i<n;i+=(2*k+1),j++) a[j]=i;
        for (i=0;i<j;i++) cout<<a[i]-s<<" ";
        cout<<a[i-1]+(2*k+1)-s<<endl;
    }
    return 0;
}
