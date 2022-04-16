///SHS
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
    int i,j,k,n,x,s=0,o=0,l=1;
    cin>>n>>x;
    for (i=0;i<n;i++)
    {
        cin>>j;
        s+=j;
    }
    s=abs(s);
    o=s/x;
    if (s%x) o++;
    cout<<o<<endl;
    return 0;
}
