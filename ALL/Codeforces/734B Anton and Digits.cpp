///SHS
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long int i,j,k,a[3];
    cin>>a[0]>>k>>a[1]>>a[2];
    i=a[0];
    sort (a,a+3);
    long int s=256*a[0];
    i-=a[0];
    if (i>k) s+=32*k;
    else s+=32*i;
    cout<<s<<endl;
    return 0;
}
