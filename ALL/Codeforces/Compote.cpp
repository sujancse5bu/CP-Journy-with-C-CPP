///ShreeHarichad Smarane
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long int a[3];
    cin>>a[0]>>a[1]>>a[2];
    a[1]/=2;
    a[2]/=4;
    sort (a,a+3);
    cout<<1*a[0]+2*a[0]+4*a[0]<<endl;
    return 0;
}
