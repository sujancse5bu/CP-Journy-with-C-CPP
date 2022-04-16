///ShreeHarichad Smrane
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int i,n,m,s=1;
    cin>>n;
    m=n/2;
    for (i=2;i<=m;i++) if (n%i==0) s++;
    cout<<s<<endl;
    return 0;
}
