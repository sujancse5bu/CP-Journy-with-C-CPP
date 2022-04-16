///ShreeHarichad Smarne
#include <iostream>
using namespace std;
int main ()
{
    long int i,k,l,j,n,m,a[100000];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    n--;
    for (i=0;i<n;i++) cout<<a[i]+a[i+1]<<" ";
    cout<<a[n]<<endl;
    return 0;
}
