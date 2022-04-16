/// Shree Harichad Smarane
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int i,n,s,c=0,d=0;
    cin >>n;
    int v[n];
    for (i=0;i<n;i++)
    {
        cin>>v[i];
        if (i==1) d=abs(v[1]-v[0]);
        else if (i>1)
        {
            s=abs(v[i-1]-v[i]);
            if (s!=d) c=2;
        }
    }
    if (c==2) cout<<v[n-1]<<endl;
    else cout<<v[n-1]+(v[n-1]-v[n-2])<<endl;
    return 0;
}
