///ShreeHarichad Smrane
#include <iostream>
using namespace std;
int main ()
{
    int i,n;
    cin>>n;
    long int a[n],s=0,m=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if (n==1)
    {
        cout<<1;
        return 0;
    }
    else if (s%2==1) s++;
    s=s/2;
    for (i=0;i<n;i++)
    {
        m+=a[i];
        if (s<=m) break;
    }
    cout<<i+1;
    return 0;
}
