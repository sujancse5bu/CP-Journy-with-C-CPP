///    OmShantihari
///    Author: Sujan Mridha
///    CSE 5th batch, University of Barishal
#include <iostream>
using namespace std;
int main ()
{
    long long int i=0,l,n,m,x,y,a;
    cin>>n>>m>>x>>y>>l;
    if (n<=x)
    {
        if (m<=y) i=m-x+1;
        else i=m-x+1;
    }
    else i=y-m+1;
    if (l>=x && l<=y) i--;
    if (i<0) i=0;
    cout<<i<<endl;
    return 0;
}
