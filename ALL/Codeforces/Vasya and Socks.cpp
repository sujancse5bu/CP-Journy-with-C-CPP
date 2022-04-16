///ShreeHarichad Smarane
#include <iostream>
using namespace std;
int main ()
{
    int i,n,m,a,d,l=0;
    cin>>n>>m;
    a=n;
    while (n>0)
    {
        //cout<<n<<endl;
        a+=n/m;
        d=n%m;
        l+=d;
        if (l>=m)
        {
            n=n/m+l;
            l=0;
        }
        else n=n/m;
    }
    cout<<a<<endl;
    return 0;
}
