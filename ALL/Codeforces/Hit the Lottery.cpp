///ShreeHarichad Smrane
#include <iostream>
using namespace std;
int main()
{
    long long int i,n,a=0,d,k=0,s=0;
    cin>>n;
    s+=n/100;
    n=n%100;
    s+=n/20;
    n=n%20;
    s+=n/10;
    n=n%10;
    s+=n/5;
    n=n%5;
    s+=n;
    cout<<s;
    return 0;
}
