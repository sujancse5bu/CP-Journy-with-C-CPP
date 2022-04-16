///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,k,n,s,p,x,y,z;
    cin>>k>>n>>s>>p>>x>>y;
    i=(k+n)*(s+n)-n*n;
    z=(p+x)*(y+x)-x*x;
    cout<<i+z<<endl;
    return 0;
}
