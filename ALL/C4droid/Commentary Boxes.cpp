///SHreeHarichad Sarane
#include <iostream>
using namespace std;
int main ()
{
    long long int n,m,a,b,i,j,k,l;
    cin>>n>>m>>a>>b;
    if (n%m==0) cout<<0<<endl;
    else
    {
        i=n%m;
        j=m-i;
        k=i*b;
        l=j*a;
        if (k>l) cout<<l<<endl;
        else cout<<k<<endl;
    }
    return 0;
}
