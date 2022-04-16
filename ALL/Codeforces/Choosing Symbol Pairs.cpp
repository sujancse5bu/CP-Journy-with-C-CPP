///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>

using namespace std;
int main ()
{
    long long int i,j,k,l,a[300]={0};
    string s;
    cin>>s;
    l=s.size();
    for (i=0;i<l;i++) a[s[i]]++;
    for (i=40,k=0;i<130;i++) k+=a[i]*a[i];
    cout<<k<<endl;
    return 0;
}
