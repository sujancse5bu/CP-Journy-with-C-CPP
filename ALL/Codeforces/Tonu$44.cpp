#include <iostream>
using namespace std;
int main ()
{
    int i,n,m,s,a,b,x,y;
    cin>>n;
    m=2*n;
    int d[m];
    a=d[0];
    b=d[n-1];
    x=d[n];
    y=d[m-1];
    for (i=0;i<m;i++) cin>>d[i];
    for (i=0;i<n;i++) if (a>d[i]) a=d[i];
    cout<<a<<b<<x<<y;
}
