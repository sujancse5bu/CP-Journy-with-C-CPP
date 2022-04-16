///SHS
#include <iostream>
using namespace std;
int main ()
{
    int i,k,n,s,p,x,y,z;
    cin>>k>>n>>s>>p;
    x=0;
    y=0;
    z=0;
    for (i=0;i<k;i++)
    {
        z=n/s;
        if (n%s>0) z++;
        y+=z;
    }
    x=y/p;
    if (y%p>0) x++;
    cout<<x<<endl;
    return 0;
}
