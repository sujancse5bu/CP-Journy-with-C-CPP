///ShreeHarichad Smarane
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long long int i,n,m,a[30];
    cin>>a[0]>>a[1]>>a[2];
    sort (a,a+3);
    i=(a[0]+a[1])*2;
    //cout<<i<<endl;
    if (a[0]+a[1]<=a[2]) cout<<i<<endl;
    else cout<<(a[0]+a[1]+a[2])<<endl;
    return 0;
}
