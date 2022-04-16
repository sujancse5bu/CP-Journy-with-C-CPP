///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;



long long int fac (long long int a)
{
    if (a==0) return 1;
    else
    {
        cout<<endl;
        return a*fac(a-1);
    }
}

int main ()
{
    long long int a;
    cin>>a;
    cout<<fac (a)<<endl;
    return 0;
}


///   Recursion is a method of solving a problem where the solution depends on solution
///     smaller instance of the same problem.



/// last in, first out >>> liffo >> stack
/// First in, first out >>> queue
