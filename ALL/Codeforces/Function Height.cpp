///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    long long int i,j,k,n;
    cin>>n>>k;
    j=k/n;
    if (k%n>0) j++;
    cout<<j<<endl;



    return 0;
}


