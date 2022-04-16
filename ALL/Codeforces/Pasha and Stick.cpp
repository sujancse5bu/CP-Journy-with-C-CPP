///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    long long int i,k,l=0,n;
    cin>>n;
    if (n%2==0)
    {
        l=n/4;
        if (n%4==0) l--;
    }
    cout<<l<<endl;
    return 0;
}
