///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int i,j,k,l,d,p,r,h,n,a[100]={0};
    string s;
    char b;
    cin>>n>>k;
    cin>>s;
    d='A'+k;
    for (i=0;i<n;i++)
    {
        b=s[i];
        a[b]++;
    }
    sort (a+'A',a+d);
    cout<<a['A']*k<<endl;
    return 0;
}

