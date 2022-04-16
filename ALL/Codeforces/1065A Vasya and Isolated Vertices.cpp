#include <iostream>
using namespace std;
int main ()
{
    long long int i,s,d,f,g,h,a,b,c,n,m,x[200];
    cin>>n>>m;
    i=n-2*m;
    s=n-m-1;
    if (i<0) cout<<0<<' ';
    else cout<<i<<' ';
    if (s<0) cout<<0<<endl;
    else cout<<s<<endl;
    return 0;
}

