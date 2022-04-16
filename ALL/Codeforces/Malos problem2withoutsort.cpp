#include <iostream>
using namespace std;
int main ()
{
    int i,f,a,b,x,y,z,l[100];
    cin>>f;
    for (i=0;i<f;i++) cin>>l[i];
    x=l[0];
    y=0;
    z=0;
    for (i=0;i<f;i++) if (x<l[i]) x=l[i];
    for (i=0;i<f;i++) if (y<l[i] && l[i]<x) y=l[i];
    for (i=0;i<f;i++) if (z<l[i] && l[i]<y) z=l[i];
    cout<<z<<endl;
    return 0;
}
