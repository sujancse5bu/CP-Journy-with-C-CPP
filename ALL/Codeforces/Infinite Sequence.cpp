///SHS
#include <iostream>
using namespace std;
int main ()
{
    long long int i,j,k,l=0,n,m=1;
    cin>>n;
    for (i=1,m=1;m<n;i++,m+=i) l=m;
    cout<<n-l<<endl;
    return 0;
}
