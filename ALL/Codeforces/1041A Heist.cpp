///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    long long int a,i,j,k,x[10000];
    cin>>k;
    for (i=0;i<k;i++) cin>>x[i];
    sort (x,x+k);
    j=x[k-1]-x[0];
    j-=(k-1);
    cout<<j<<endl;
    return 0;
}

