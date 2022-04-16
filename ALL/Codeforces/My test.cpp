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
    for (i=0;i<l;i+=2) s[i]='\0';

    cout<<s<<endl;
    return 0;
}
