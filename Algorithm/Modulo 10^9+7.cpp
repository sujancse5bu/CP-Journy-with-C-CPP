/* OmShantihari; Author: Sujan Mridha, CSE 5th batch, University of Barishal */
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli mfact (lli n, lli m)
{
    lli o=1;
    while (n>1)
    {
        o=(o*n)%m;
        n--;
    }
    return o;
}
int main ()
{
    lli i,j,n,k,l,m,o,c,d,x=1,y=0,z=0,sum=0;
    cout<<"Enter a number for determine factorial: ";
    cin>>n;
    cout<<"Enter the modulo number: ";
    cin>>k;
    o=mfact (n,k);
    cout<<o<<endl;
    return 0;
}

