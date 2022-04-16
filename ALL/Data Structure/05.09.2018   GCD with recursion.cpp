///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
long long int  gcd (long long int a, long long int b);
int main ()
{
    long long int a,b,c;
    cin>>a>>b;
    cout<<gcd (a,b)<<endl;
    return 0;
}
long long int  gcd (long long int a, long long int b)
{
    if (b==0) return a;
    else return gcd (b,a%b);
}
