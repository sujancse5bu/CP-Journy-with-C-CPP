/// SreeHari Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,m,n,a[100000];
    cin>>m>>n;
    for (i=0;i<m;i++) cin>>a[i%n];
    for (i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
