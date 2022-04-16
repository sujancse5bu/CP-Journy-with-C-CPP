///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal


//not submitted



#include <iostream>
using namespace std;
int main ()
{
    long long int a,n,s,i,j,k,l;
    cin>>n;
    if (n<0) n*=-1;
    for (i=0,s=0;s<n;i++) s=(i*(i+1))/2;
    i--;
    s=(i*(i+1))/2;
    j=s-n;
    if (s>n)
    {
        i--;
        s=(i*(i+1))/2;
    }
    k=n-s;
    if (k<j) i+=k*2;
    else i+=j*2;
    cout<<i<<endl;
    return 0;
}
