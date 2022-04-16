///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,a,b,c,n,p;
    cin>>a>>b>>c>>n;
    p=a+b;
    p-=c;
    if (p>=n || c>a || c>b) cout<<"-1"<<endl;
    else cout<<n-p<<endl;
    return 0;
}
